#include "Ticket.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ticket() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::Ticket form3;
	Application::Run(%form3);
}

