#include <iostream>

using namespace std;

int main()
{
    int n, cari;
    bool ketemu = false;

    // Menentukan Panjang Array
    cout << "Input jumlah data: ";
    cin >> n;
    cout << endl;

    // Memasukan nilai kedalam Array
    int list_data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "input data ke-" << i << ": ";
        cin >> list_data[i];
    }
    cout << endl;

    // Menentukan nilai yang ingin di cari
    cout << "input bilangan yang di cari: ";
    cin >> cari;
    cout << endl;

    // Mencari denngan sequential
    for (int i = 0; i < n; i++)
    {
        if (list_data[i] == cari)
        {
            ketemu = true;
            cout << "Data di temukan pada index ke-" << i;
            break;
        }
    }
    if (!ketemu)
        cout << "Data tidak di temukan";
}