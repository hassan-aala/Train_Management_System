#pragma once
#include<iostream>
#include "msclr\marshal_cppstd.h"
#include<fstream>
#include<string>
using namespace msclr::interop;
using namespace std;
using namespace System;
class Fare
{
public:
	Fare();
	~Fare();
	fstream file;
	String^ fare_cal(string from, string to,int i)
	{
		string fares;
		string f = from + ".txt";
			file.open(f, ios::in);
			i--;
			while (getline(file,fares))
			{
				if (fares == to)
				{
					while (getline(file, fares) && (i--));
				
					return marshal_as<String^>(fares);
				}
				
		}
	}

};

