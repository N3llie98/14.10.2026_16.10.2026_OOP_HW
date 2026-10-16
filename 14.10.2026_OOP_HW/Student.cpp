#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
	eduYear = 0;
}

Student::Student(string _name, int _age, int _eduYear)
{
	name = _name;
	age = _age;
	eduYear = _eduYear;
}

void Student::init(string _name, int _age, int _eduYear)
{
	name = _name;
	age = _age;
	eduYear = _eduYear;
}

//void Student::print()
//{
//	cout << "Name: " << name << "\nAge: " << age << "\nEdu year: " << eduYear << endl << endl;
//}

string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

int Student::getEduYear()
{
	return eduYear;
}

void Student::setName(string _name)
{
	name = _name;
}

void Student::setAge(int _age)
{
	age = _age;
}

void Student::setEduYear(int _eduYear)
{
	eduYear = _eduYear;
}

Student& Student::operator++() // ++a
{
	eduYear += 1;
	return *this;
}

Student Student::operator++(int) // a++
{
	Student res = *this;
	eduYear += 1;
	return res;
}

Student& Student::operator--() // --a
{
	eduYear -= 1;
	if (eduYear <= 0) {
		eduYear = 1;
	}
	return *this;
}

Student Student::operator--(int) // a--
{
	Student res = *this;
	eduYear -= 1;
	if (eduYear <= 0) {
		eduYear = 1;
	}
	return res;
}

Student Student::operator+=(unsigned int years) // obj += int
{
	age += years;
	return *this;
}

Student Student::operator-=(int years) // obj -= int
{
	age -= years;
	if (age <= 0) {
		age = 1;
	}
	return *this;
}
