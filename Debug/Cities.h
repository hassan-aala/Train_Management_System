#pragma once

#include "msclr\marshal_cppstd.h"
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
using namespace msclr::interop;
using namespace System;
class Cities
{
public:
	Cities();
	~Cities();
	  fstream file;
	 string name;
	 void readname(System::String ^*n,int i)
	{
		int c = 0;
		file.open("Cityname.txt", ios::in);
		
	while (getline(file, name))
		{
		if (c == i)
			break;
			c++;
		}
		
	
			*n = marshal_as<String^>(name);
			file.close();
		
	}
};

