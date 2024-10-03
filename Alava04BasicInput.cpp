#include <iostream>

using namespace std;
int main() { 
	string name, level, school;
	int age;
	cout << "Nickname: ";
	cin >> name;
	cout << "Course-year Level: ";
	cin >> level;
	getline (cin, level);
	cout << "School: ";
	cin >> school;
	getline (cin, school);
	cout << "Wow congrats " << name << "! " << level << " is a nice course. ";
	cout << "And your are studying in " << school << " which is one of the Center of Excellence in Tertiary Education.";
	return 0;
}