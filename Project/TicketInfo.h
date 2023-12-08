#pragma once
#include"Seats.h"
#include "msclr\marshal_cppstd.h"

using namespace msclr::interop;
using namespace System;

class TicketInfo:public Seats
{
private:
	ofstream info;
public:

	TicketInfo();
	~TicketInfo();
	
	

	void SaveInfo(string username, string type, int seatno, string from, string to, string fare,int compart,string train)
	{
		info.open("BookTicket.txt", ios::app);

		info << username << endl<<seatno<<endl <<train << endl;
	
		info << type << endl<<compart<<endl;

		info << from << endl << to << endl << fare << endl;


		Seats::bookSeats(type,train, seatno);
	}
	
	static int cancel(string username,string seatno, String ^*compart,String ^*type, String ^*from, String ^*to, String ^*train, String ^*fare)
	{
		string content[50];
		
		string Train, comp, fcity, tcity, fares, Type;
		
		int i=0,check=0;
		
		ifstream read;
		
		read.open("BookTicket.txt");
		
		while (getline(read,content[i]))
		{
			
			if (content[i] == username)
			{
				i++;
		
				getline(read, content[i]);
				
				if (content[i] == seatno)
				{
						
					getline(read,Train);
					getline(read,Type);
					getline(read,comp);
					getline(read,fcity);
					getline(read,tcity);
					getline(read,fares);


					*train= marshal_as<String^>(Train);
					*compart= marshal_as<String^>(comp);
					*from= marshal_as<String^>(fcity);
					*to= marshal_as<String^>(tcity);
					*fare= marshal_as<String^>(fares);
					*type= marshal_as<String^>(Type);
					
					Seats::Cancel(Train, Type,seatno);
					
					check=1;
					
					i = i - 2;
				}
				
				else 
				{
					check = 2;	
				}
			}
			i++;
		}
			read.close();
			
			if (check == 1)
			{
				int index = 0;
			
				ofstream file;

				file.open("BookTicket.txt");

				while (index<i)
				{
					file << content[index++] << endl;
				}
			
				file.close();
			}
		return check;
	}
	
};

