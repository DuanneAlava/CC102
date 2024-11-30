#include <iostream>
using namespace std;
int main() {
    int n = 8; // Number of characters to print
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << " ";
		}
		for (int j = 1; j <= n; j++) {
			if (j % 2 == 0) {
				cout << "* ";
			}else{
				cout << "# ";
			}
		}
		cout << endl;
    }
    return 0;
}
