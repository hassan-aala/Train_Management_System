#include "Details.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void detail() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::Details form;
	Application::Run(%form);
}