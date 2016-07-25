
!ifndef BDS
#BDS=$(MAKEDIR)\..
BDS=c:\\bds4
!endif # BDS


!ifndef BDSPROJ2MAK
BDSPROJ2MAK=$(BDS)\bin\bdsproj2mak.exe
!endif # BDSPROJ2MAK

.bdsproj.mak:
	$(BDSPROJ2MAK) $<


#datastud.mak: datastud.bdsproj
#//	$(BDSPROJ2MAK) $@


	
	
