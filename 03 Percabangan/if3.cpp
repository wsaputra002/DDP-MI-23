#include <iostream>

using namespace std;

int main()
{
    int y;

    cin >> y;

    if (y >= 0 && y <= 9)
    {
        cout << "Satuan" << endl;
    }
    else if (y >= 10 && y <= 99)
    {
        cout << "Puluhan" << endl;
    }
    else if (y >= 100 && y <= 999)
    {
        cout << "Ratusan" << endl;
    }
    else
    {
        cout << "Tidak Tahu" << endl;
    }
}