#pragma once
#include <iostream>
using namespace std;

class Student
{
	string name;
	int age;
	int eduYear;
public:
	Student();
	Student(string _name, int _age, int _eduYear);
	void init(string _name, int _age, int _eduYear);
	//void print(); // не треба бо тепер є cout

	//GETTERS
	string getName();
	int getAge();
	int getEduYear();
	//SETTERS
	void setName(string _name);
	void setAge(int _age);
	void setEduYear(int _eduYear);

	//ПЕРЕГРУЗКИ
	Student& operator++(); // ++a
	Student operator++(int); // a++
	Student& operator--(); // --a
	Student operator--(int); // a--
	Student operator+=(unsigned int years); // obj += int
	Student operator-=(int years); // obj -= int
};

