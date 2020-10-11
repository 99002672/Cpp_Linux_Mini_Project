//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#include <iostream>
#include <string.h>
using namespace std;
class Department {
private:
	std::string Customer_Name;
	int Customerid;
	std::string Customer_address;
	int Customer_phone_number;
	int choice, count = 0;
	int pin;
public:
	//Default Constructor Implemented
	Department();

	//Paramaterized Constructor Implemented
	Department(std::string,int, std::string, int);

	//Copy Constructor implemented
	Department(const Department& ref);

	std::string getCustomer_name(std::string);
	int getCustomerid(int);
	std::string getCustomer_address(std::string);
	int getCustomer_phone_number(int);
	void billing();
	
};
