#include "Confirm Reservation.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Reserv() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project18::ConfirmReservation form;
	Application::Run(%form);
}
