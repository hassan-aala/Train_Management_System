#pragma once
#include<iostream>
#include<conio.h>
#include "msclr\marshal_cppstd.h"
#include<fstream>
#include<string>
#include"Train.h"
#include"Person.h"

using namespace msclr::interop;
using namespace std;
using namespace System;


class Admin:public Person
{
	const string name, pass;
public:
	Admin():name("admin"),pass("admin"),Person("admin","admin")
	{}

	bool check(string username,string password)
	{
		if (username == name && password == pass)
			return true;
		return false;
	}
	

	int updatefares(string from, string to, string update_fare, int i)
	{
		int index=0;
		
		fstream file;
		from += ".txt";
		
		file.open(from, ios::in);
		
		if (!file.is_open())
			return 0;
	
		string fares[40];
		
		while (getline(file, fares[index]))
		{
			if (fares[index++] == to)
			{
				if(i==3)	
					{
						getline(file, fares[index++]);
						i--;
					}
				if(i==2)
					{
						getline(file, fares[index++]);
						i--;
					}
				if(i==1)
					{
						getline(file, fares[index]);
						i--;	
					}
				
				fares[index] = update_fare;
		
				index++;
			}
			

		}
		file.close();
		
		file.open(from, ios::out);
		
		for (int k = 0; k < index; k++)
		{
			file << fares[k] << endl;
		}
		
		file.close();
		
		return 1;
	}
	~Admin();

	int DeleteUsername(string name)
	{
		int count = 0,p_count=0,check=0;
		int index = 0;
		
		fstream file,passFile;
		
		file.open("file.txt", ios::in);
		
		if (!file.is_open())
			return 0;
		
		string *names=new string[100],*pass=new string[100];
		
		while (getline(file, names[index]))
		{
			count++;
			if (names[index] == name)
			{
				check = 1;
				index--;
			}
		
			index++;

		}
		if (check == 0)
			return 0;
		
		index = 0;

		file.close();
		
		passFile.open("Password.txt", ios::in);

		while (getline(passFile, pass[index]))
		{
			p_count++;
			if (count == p_count)
			{
				index--;
			}
			index++;
		}
		passFile.close();
		
		file.open("file.txt", ios::out);
		
		passFile.open("Password.txt", ios::out);
		
		for (int k = 0; k < index; k++)
		{
			file << names[k] << endl;
			passFile << pass[k] << endl;
		}
		
		file.close();
		
		return 1;		
	}
	
	static void AddNewTrain(Train& newtrain)
	{
		Train::AddTrain(newtrain);
	}


	void set()
	{
		//No definition as Username and Password are constants
	}
};
