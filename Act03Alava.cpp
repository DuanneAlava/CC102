#include <iostream>
using namespace std;
int main() {
    int age;
    bool parent;
    string toPrintShow, toPrintMoney;
    float money;
    cout << "Enter your age: "; 
    cin >> age;
    cout << "With parent? [1/0]: "; 
    cin >> parent;
    cout << "Enter money: "; 
    cin >> money;
    toPrintShow = (age < 13) ? (parent ? "G, PG show." : "G show.") : (age < 16) ? (parent ? "R, PG, G show." : "PG, G show.") : "R, PG, G show.";
    toPrintMoney = (money < 7.5) ? "Not enough money." : (money < 10.50) ? "Can go to matinee show." : "Can go to evening & matinee show.";
    cout << toPrintShow << endl << toPrintMoney << endl;
    return 0;
}
