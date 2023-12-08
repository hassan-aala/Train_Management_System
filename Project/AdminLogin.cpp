#include "AdminLogin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void loginmode() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::AdminLogin form6;
	Application::Run(%form6);


}