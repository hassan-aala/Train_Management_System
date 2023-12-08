#pragma once
#include"Fare.h"
#include"Cities.h"
#include"User.h"
#include"Train.h"

class Booking
{
public:
	Booking();
	~Booking();
	
	ofstream info;

	virtual int checkseats(string type) {
		return 0;
	}                      //Defined in Class Seats

	virtual void bookSeats(string type, int seatNo) {}			//Defined in Class Seats

	virtual void SaveInfo(string username, string type, int seatno, string from, string to, string fare) {}
																			//Defined in Class TicketInfo

};

