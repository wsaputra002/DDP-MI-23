#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if(x < 0){
        cout << "Negatif" << endl;
    } else if (x %2 == 0){
        cout << "Positif Genap" << endl;
    } else{
        cout << "Positif Ganjil" << endl;
    }
}