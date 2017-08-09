#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Teatcher
{
public:
	Teatcher(string name,int age);
	Teatcher(string gender);
	//void setName(string m_strName);
	//void setGender(string m_strgender);
	//void setAge(int m_iAge);
	string getName();
	string getGender();
	int getAge();
	void Teatch();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};
