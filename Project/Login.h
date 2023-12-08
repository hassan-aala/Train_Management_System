#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include "msclr\marshal_cppstd.h"

using namespace msclr::interop;
using namespace std;
using namespace System;

class Login
{
	string username, password;
public:
	ofstream file, pFile;
	Login();
	Login(string name,string pass)
	{
		username = name;
		password = pass;
	}
	~Login();
	int read_data()
	{
		string name, pass;
		int check, c = 0, p = 0;
		fstream us_rfile, p_rfile;
		us_rfile.open("file.txt", ios::in);

		p_rfile.open("Password.txt", ios::in);
		if (p_rfile.is_open() == 0)
			return 0;

		while (getline(us_rfile, name))
		{
			c++;
			if (username == name)
			{


				check = 1;
				break;
			}
		}
		if (check == 0)
			return 2;

		while (getline(p_rfile, pass))
		{
			p++;
			if (password == pass && p == c)
			{
				return 1;
			}
		}

		return 0;
	}

	String^ getImage(string name)
	{
		name = name + ".txt";
		ifstream get;
		get.open(name);
		getline(get, name);
		return  marshal_as<String^>(name);
	}

	String^ reset(string us_name,string pin)
	{
		string name, pass,get_pin;
		int check, c = 0, p = 0,pin_check=0;
		fstream us_rfile, p_rfile,getPin;
		us_rfile.open("file.txt", ios::in);

		p_rfile.open("Password.txt", ios::in);

		getPin.open("Pin.txt", ios::in);
		
		while (getline(us_rfile, name))
		{
			c++;
			if (us_name == name)
			{


				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			pass = "No Username Exist with this name!";
			return marshal_as<String^>(pass);
		}
		check = 0;
		while (getline(getPin,get_pin))
		{
			pin_check++;
			
			if (get_pin == pin && pin_check == c)
			{
				check = 1;
			}
			
		}
		
		if (check == 0)
		{
			pass = "Pin not matched!";
			return marshal_as<String^>(pass);
		}

		while (getline(p_rfile, pass))
		{
			p++;
			if (p == c)
			{
				return  marshal_as<String^>(pass);
			}
		}

		return  marshal_as<String^>(pass);
	}

};

