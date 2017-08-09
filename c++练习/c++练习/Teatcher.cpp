#include"Teatcher.h"
/*void Teatcher::setAge(int age)
{
	m_iAge = age;
}
void Teatcher::setGender(string gender)
{
	m_strGender = gender;
}
void Teatcher::setName(string name)
{
	m_strName = name;
}*/
Teatcher::Teatcher(string name, int age):m_strName(name),m_iAge(age)
{
	cout << "Teatcher(string name, int age):m_strName(name),m_iAge(age)" << endl;
}
Teatcher::Teatcher(string gender) : m_strGender(gender) 
{
	cout << ":Teatcher(string gender)" << endl;
}
string Teatcher::getName()
{
	return m_strName;
}
string Teatcher::getGender()
{
	return m_strGender;
}
int Teatcher::getAge()
{
	return m_iAge;
}
void Teatcher::Teatch()
{
	cout << "ÕýÔÚÑ§Ï°£¡£¡£¡£¡" << endl;
}