#include <iostream>
using namespace std;
int main() {
	int temperature;
	cout << "Enter a temperature: ";
	cin >> temperature;
	if(temperature<32){
		cout << "Bring heavy Jacket.. ";
	}
	else if(temperature<=32&&50){
		cout << "Bring Light Jacket.. ";
	}
	else{
		cout<<"No jacket Needed.. ";
	} 
	return 0;
}
