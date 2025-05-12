#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*"; // Print pattern elements
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
