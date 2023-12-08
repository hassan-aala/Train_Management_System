#pragma once
#include"Booking.h"
class Seats:public Booking
{
public:
	Seats();
	~Seats();
	ofstream save;
	ifstream get;

	int checkseats(string type,string train,int i)
	{
		int no=0,j=0;
		get.open(train+type + ".txt", ios::in);
		if (!get.is_open())
		{
			return -1;
		}
		for (j = 0; j < i; j++)
		{
			
			if (!get.eof())
				get >>no;
			else if (get.eof())
				break;
		}
		get.close();
		if (j != i)
			no = 0;

		return no;

	}

	void bookSeats(string type,string train, int seatNo)
	{
		save.open(train+type + ".txt", ios::app);

		save << seatNo<<endl;
		save.close();
	}

	static void Cancel(string train, string type, string seatno)
	{
		ifstream get;
		ofstream put;
	
		string read[40];
		
		int i = 0;
		
		get.open(train + type + ".txt");
		
		while (getline(get, read[i]))
		{
			if (read[i] == seatno)
				i--;
			i++;
		}
		get.close();
		
		put.open(train + type + ".txt",ios::out);
		int index = 0;
		while (index < i)
		{
			put << read[i]<<endl;
		}
		put.close();
	}
	
};

