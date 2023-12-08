#include "image insertion.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void image() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::imageinsertion form;
	Application::Run(%form);
}