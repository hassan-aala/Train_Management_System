#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main3() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::MyForm2 form3;
	Application::Run(%form3);
}