#include "DeleteUser.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Delete() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::DeleteUser form;
	Application::Run(%form);
}