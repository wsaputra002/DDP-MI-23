#include<iostream>
using namespace std;
int main () {
    string kalimat;
    getline (cin, kalimat);
    
    int panjang = kalimat.length();
    
    for (int i = panjang  -1; i >= 0; i--) {
        cout << kalimat [i];
    }
    cout << endl;

    return 0;
} 