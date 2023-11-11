#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 0)
    {
        if (x % 2 == 0)
        {
            cout << "Positif Genap";
        }
        else
        {
            cout << "Positif Ganjil";
        }
    }
    else
    {
        cout << "Negatif";
    }
}
