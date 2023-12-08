#pragma once
#include<iostream>

using namespace std;
class Person
{
	string username, password;
public:
	Person();
	Person(string name, string pass)
	{
		username = name;
		password = pass;
	}
	~Person();
	virtual void set() = 0;
};

