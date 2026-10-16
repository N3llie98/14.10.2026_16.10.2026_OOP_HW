#include <iostream>
using namespace std;
#include "Student.h"

ostream& operator<<(ostream& out, Student& obj) { // cout << obj
	out << "Name: " << obj.getName() << "\nAge: " << obj.getAge() << "\nEdu year: " << obj.getEduYear();
	return out;
}
istream& operator>>(istream& in, Student& obj) { // cin >> obj
    string n;
    int a, ey;
    cout << "Enter name: ";
    in >> n;
    cout << "Enter age: ";
    in >> a;
    cout << "Enter edu year: ";
    in >> ey;
    obj.setName(n);
    obj.setAge(a);
    obj.setEduYear(ey);
    return in;
}

int main()
{
    cout << "===== CIN, COUT =====\n";
    Student obj;
    cin >> obj;
    cout << obj;

    cout << "\n\n===== ++OBJ, OBJ++ =====\n";
    ++obj;
    cout << "++obj: " << obj.getEduYear() << endl;
    Student obj2 = obj++;
    cout << "obj++: " << obj2.getEduYear() << ", then " << obj.getEduYear();

    cout << "\n\n===== --OBJ, OBJ-- =====\n";
    cout << obj << endl << endl;
    --obj;
    cout << "--obj: " << obj.getEduYear() << endl;
    obj2 = obj--;
    cout << "obj--: " << obj2.getEduYear() << ", then " << obj.getEduYear();

    cout << "\n\n===== OBJ+=int, OBJ-=int =====\n";
    Student obj3("NAME", 16, 2);
    cout << obj3 << endl << endl;
    obj3 += 2;
    cout << "obj += 2: " << obj3.getAge() << endl;
    obj3 -= 2;
    cout << "obj -= 2: " << obj3.getAge() << endl;
	return 0;
}