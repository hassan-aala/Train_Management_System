#pragma once
#include<iostream>
#include<conio.h>
#include "msclr\marshal_cppstd.h"
#include<fstream>
#include<string>


using namespace msclr::interop;
using namespace std;
using namespace System;


class Fare
{
private:
	
public:
	Fare();
	~Fare();
	fstream file;
	String^ fare_cal(string from, string to,int i)
	{
		string city_name,fares;
		string f = from + ".txt";
			file.open(f, ios::in);
			i--;
			while (getline(file,city_name))
			{
				if (city_name == to)
				{
					while (getline(file, fares) && (i--));
				
					return marshal_as<String^>(fares);
				}
				
		}
			return marshal_as<String^>(fares);
	}

};

