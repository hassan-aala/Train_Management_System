#include "newtrain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void newtrain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::newtrain form3;
	Application::Run(%form3);
}