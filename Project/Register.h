#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include "msclr\marshal_cppstd.h"

using namespace msclr::interop;
using namespace std;
using namespace System;

class Register
{
	string username, password, pin;

	ofstream file, pFile,Pin;
public:
	Register();
	
	Register(string name, string pass,string j)
	{
		username = name;
		password = pass;
		pin = j;
	}
	
	~Register();
	void put_data()
	{
		file.open("file.txt", ios::app);

		pFile.open("Password.txt", ios::app);

		Pin.open("Pin.txt", ios::app);

		char *pstr = &password[0u];
		char *ustr = &username[0u];
		char *pinptr = &pin[0u];
		
		file << ustr << endl;

		pFile << pstr << endl;

		Pin << pinptr << endl;

		file.close();

		pFile.close();

		Pin.close();
	}
	
	void saveImage(string filename,string name)
	{
		ofstream put;
		put.open(name+".txt");
		put << filename;
	}
	
	int check(string username)
	{
		string name;
		
		ifstream us_rfile;
		us_rfile.open("file.txt");

		while (getline(us_rfile, name))
		{
			
			if (username == name)
			{
	
				return 1;
			}
		}
		return 0;
	}
};

