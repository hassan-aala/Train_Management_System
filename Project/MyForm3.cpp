#include "MyForm3.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main4() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::MyForm3 form4;
	Application::Run(%form4);
}