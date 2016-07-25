implib -a confdll.lib Debug_Build\confdll.dll
if errorlevel 1 goto goterror
c:\bds4\bin\make -f bdsproj.mak test_perl_dll.mak
if errorlevel 1 goto goterror
c:\bds4\bin\make -f test_perl_dll.mak clean_Construction_debogage Construction_debogage
if errorlevel 1 goto goterror
copy Debug_Build\test_perl_dll.exe Debug_Build\test_perl_dll-noperl-noconf.exe 
c:\bds4\bin\make -f test_perl_dll.mak clean_Construction_debogage Construction_debogage_confd
if errorlevel 1 goto goterror
copy Debug_Build\test_perl_dll.exe Debug_Build\test_perl_dll-noperl.exe 
c:\bds4\bin\make -f test_perl_dll.mak clean_Construction_debogage Construction_debogage_perl
if errorlevel 1 goto goterror
copy Debug_Build\test_perl_dll.exe Debug_Build\test_perl_dll-noconf.exe 
c:\bds4\bin\make -f test_perl_dll.mak clean_Construction_debogage Construction_debogage_both
if errorlevel 1 goto goterror
copy Debug_Build\test_perl_dll.exe Debug_Build\test_perl_dll-both.exe 
goto fin
:goterror
echo got error
:fin
pause
