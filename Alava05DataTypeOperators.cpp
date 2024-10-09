#include <iostream>
using namespace std;
int main() {
	int a,b,x;
	double sum,diff,prod,quo,rem;
	cout << "********************************\n";
	cout << "CALCULATOR\n";
	cout << "********************************\n";
	cout << "1. Sum\n";
	cout << "2. Difference\n";
	cout << "3. Product\n";
	cout << "4. Quotient\n";
	cout << "5. Remainder\n";
	cout << "********************************\n";
	cout << "ENTER NUMBER 1-5: ";
	cin >> x;
	//switch for entering number 1-5
	switch(x) {
		case 1: //Sum
			cout << "Enter a first number: ";
			cin >> a;
			cout << "Enter a sec. number: ";
			cin >> b;
			sum = a + b;
			cout << "The answer is " << sum;
			break;
		case 2: //Difference
			cout << "Enter a first number: ";
			cin >> a;
			cout << "Enter a sec. number: ";
			cin >> b;
			diff = a - b;
			cout << "The answer is " << diff;
			break;
		case 3: //Product
			cout << "Enter a first number: ";
			cin >> a;
			cout << "Enter a sec. number: ";
			cin >> b;
			prod = a * b;
			cout << "The answer is " << prod;
			break;
		case 4: //Quotient
			cout << "Enter a first number: ";
			cin >> a;
			cout << "Enter a sec. number: ";
			cin >> b;
			quo = a / b;
			cout << "The answer is " << quo;
			break;
		case 5: //Remainder
			cout << "Enter a first number: ";
			cin >> a;
			cout << "Enter a sec. number: ";
			cin >> b;
			rem = a % b;
			cout << "The answer is " << rem;
			break;
		default:
				cout << "ERROR!";
	}
		return 0;
}