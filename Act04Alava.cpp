#include <iostream>
using namespace std;
int main() {
    double balance, interestRate = 0.0;
    char accountType, accountLevel;
    cout << "Enter your bank account balance: $"; 
	cin >> balance;
    cout << "Enter your account type (P=Personal or B=Business): "; 
	cin >> accountType;
    cout << "Enter your account level (S=Standard, G=Gold, or P=Platinum): "; 
	cin >> accountLevel;
    interestRate = (accountType == 'P' || 'p' && accountLevel == 'S' || 's' && balance >= 0) ? 1.2 :
                   (accountType == 'P' || 'p' && accountLevel == 'G' || 'g' && balance >= 1000) ? 1.9 :
                   (accountType == 'P' || 'p' && accountLevel == 'G' || 'g' && balance >= 5000) ? 2.3 :
                   (accountType == 'B' || 'b' && accountLevel == 'S' || 's' && balance >= 1500) ? 1.7 :
                   (accountType == 'B' || 'b' && accountLevel == 'P' || 'p' && balance >= 10000) ? 2.5 : 0.0;
    cout << (interestRate > 0 ? "Your interest rate is: " + to_string(interestRate) + "%" :
                                "Your account does not meet the minimum balance requirements for any interest rate.") << endl;
    return 0;
}
