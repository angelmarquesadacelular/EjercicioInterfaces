#pragma once  //______________________________________ EjercicioInterfacess.h  
#include "Resource.h"
class EjercicioInterfacess: public Win::Dialog
{
public:
	EjercicioInterfacess()
	{
	}
	~EjercicioInterfacess()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"EjercicioInterfacess";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
