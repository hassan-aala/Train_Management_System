#include "Entry.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Start() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::Entry form6;
	Application::Run(%form6);
	//for (long long int i = 0; i < 10000000; i++);
	

}