#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows * 2; ++j) {
            if (i % 2 == 0) {
                cout << "^ ";
            } else {
                cout << " ^";
            }
        }
        cout << endl;
    }
    return 0;
}
