//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//#define LINK_PERL
//#define LINK_CONF

#if defined LINK_PERL
#include "config.h"
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#endif

#if defined LINK_CONF
extern "C" {
extern int __declspec(dllimport) __cdecl foo(int bar);
}
#endif

//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
#if defined LINK_PERL
		PERL_SYS_INIT3(&_argc,&_argv,&_environ);
		PerlInterpreter *my_perl = perl_alloc();
#endif
#if defined LINK_CONF
		int tmp = foo(42);
#endif
		Application->Initialize();
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
