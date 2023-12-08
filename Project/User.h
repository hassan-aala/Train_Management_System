#pragma once
#include"Login.h"
#include"Register.h"
#include"Person.h"
class User:public Login,public Register,public Person
{

public:
	

	User();
	User(string username,string password):Login(username,password),Person(username,password)
	{}

	User(string username,string password,string no):Register(username,password,no),Person(username,password)
	{}

	~User();

	void set()
	{
		//
	}
	
	
	
	
};



