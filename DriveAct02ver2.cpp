#include <iostream>
using namespace std;
int main() {
	int age;
	cout << "Enter an age: "; cin >> age;
	cout << (age<16)? "Too young to drive.." : (age==16)? "Better clear the road.." : "You are getting pretty old";
	return 0;
} 
