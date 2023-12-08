#include "cancellation.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void cancel() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::cancellation form5;
	Application::Run(%form5);
}