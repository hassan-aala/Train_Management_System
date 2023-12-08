#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<conio.h>

using namespace std;
class User
{
public:
	ofstream file, pFile;

	User();
	~User();

	void User::set(string name, string pass)
	{
		file.open("file.txt", ios::app);

		pFile.open("Password.txt", ios::app);

		char *pstr = &pass[0u];
		char *ustr = &name[0u];

		file << ustr << endl;

		pFile << pstr << endl;

		file.close();

		pFile.close();
	}

	
	int User::read(string name, string pass)
	{
		string username, password;
		int check, c = 0, p = 0;
		fstream us_rfile, p_rfile;
		us_rfile.open("file.txt", ios::in);

		p_rfile.open("Password.txt", ios::in);
		if (p_rfile.is_open() == 0)
			return 0;

		while (getline(us_rfile, username))
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

		while (getline(p_rfile, password))
		{
			p++;
			if (password == pass && p == c)
			{
				return 1;
			}
		}

		return 0;
	}
	
};



