#include "Administrator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void mode() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::Administrator form6;
	Application::Run(%form6);
	


}