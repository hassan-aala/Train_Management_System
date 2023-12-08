#include "AfterLogin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Afterlogin() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::AfterLogin form;
	Application::Run(%form);
}