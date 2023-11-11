#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int matrix[A][B];

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = A - 1; i >= 0; i--) {
        for (int j = B - 1; j >= 0; j--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}