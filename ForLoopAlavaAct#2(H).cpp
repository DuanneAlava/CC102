#include <iostream>
using namespace std;
int main() {
    int rows = 7; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << '#';
        }
        cout << '^' << endl;
    }
    for (int i = 0; i < rows; ++i) {
        cout << '#';
    }
    cout << '^' << endl;
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << '#';
        }
        cout << '^' << endl;
    }
    return 0;
}