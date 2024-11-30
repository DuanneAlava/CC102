#include <iostream>
using namespace std;
int main() {
    char n;
    cout << "Enter symbol to use (*,^,#,$,@): ";
    cin >> n;
    if (n == '*' || n == '^' || n == '#' || n == '$' || n == '@') {
        int rows = 5;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows * 2; ++j) {
                if (i % 2 == 0) {
                    cout << n << ' ';
                } else {
                    cout << ' ' << n;
                }
            }
            cout << endl;
        }
    } else {
        cout << "Invalid symbol entered." << endl;
    }
    return 0;
}