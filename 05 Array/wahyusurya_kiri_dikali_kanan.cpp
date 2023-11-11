#include <iostream>

using namespace std;

int main() {
    
    int A, B;
    cin >> A >> B;

    int matriks[A][B];

    
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            matriks[i][j] = (i + 1) * (j + 1);
        }
    }

    
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}