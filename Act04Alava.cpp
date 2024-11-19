#include <iostream>
#include <string>
using namespace std;
int main() {
    double balance, interestRate = 0.0;
    string accountType, accountLevel;
    cout << "Enter your bank account balance: $"; cin >> balance;
    cout << "Enter your account type (Personal or Business): "; cin >> accountType;
    cout << "Enter your account level (Standard, Gold, or Platinum): "; cin >> accountLevel;
    interestRate = (accountType == "Personal" && accountLevel == "Standard" && balance >= 0) ? 1.2 :
                   (accountType == "Personal" && accountLevel == "Gold" && balance >= 1000) ? 1.9 :
                   (accountType == "Personal" && accountLevel == "Gold" && balance >= 5000) ? 2.3 :
                   (accountType == "Business" && accountLevel == "Standard" && balance >= 1500) ? 1.7 :
                   (accountType == "Business" && accountLevel == "Platinum" && balance >= 10000) ? 2.5 : 0.0;
    cout << (interestRate > 0 ? "Your interest rate is: " + to_string(interestRate) + "%" :
                                "Your account does not meet the minimum balance requirements for any interest rate.") << endl;
    return 0;
}