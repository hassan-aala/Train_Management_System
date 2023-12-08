#pragma once
#include<iostream>
#include<fstream>

#include<string>
#include<conio.h>

#include "msclr\marshal_cppstd.h"




using namespace msclr::interop;
using namespace std;
using namespace System;

class Train
{
	string name;
	int train_no, Engine_no;
	fstream put,getTNo,getEno;
	static void AddTrain(Train &newtrain)
	{
		ofstream file;

		file.open("Train.txt", ios::app);

		file << newtrain.name<<endl;

		file.close();

		newtrain.Store_data();
		/*file.open(newtrain.name + ".txt", ios::out);

		file << "name=" << newtrain.name << endl;
		file << "Engine No=" << newtrain.Engine_no << endl;
		file << "Train No=" << newtrain.train_no << endl;
		*/
		file.open(newtrain.name + "Economy" + ".txt", ios::out);
		file.close();
		file.open(newtrain.name + "LowerAc" + ".txt", ios::out);
		file.close();
		file.open(newtrain.name + "Bussiness" + ".txt", ios::out);
		file.close();
	}
public:
	Train();
	~Train();
	
	int readname(System::String ^*n, int i)                             //
	{
		int c = 0;
		put.open("Train.txt", ios::in);

		while (getline(put, name))
		{
			if (c == i)
				break;
			if (put.eof())
				break;
			c++;
		}
		if (i != c)
			return 0;

		*n = marshal_as<String^>(name);
		put.close();
		if (i == c)
			return 1;
		return 0;
			
	}
	void setInfo(string name,int tNo,int Eno)
	{
		train_no = tNo;
		Engine_no = Eno;
		this->name = name;
	}

	void Store_data()
	{

		put.open(name, ios::out);
		put << name << endl;
		put << train_no << endl;
		put << Engine_no << endl;
		put.close();
	}

	int getTrainNO(string tname)
	{
		int no;
		tname = tname + ".txt";
		getTNo.open(tname, ios::in);
		getTNo >> no;
		return no;
	 }
	int getEngineNO(string tname)
	{
		int no;
		tname = tname + ".txt";
		getEno.open(tname, ios::in);
		getEno >> no;
		getEno >> no;
		return no;
	}
	friend class Admin;
};


