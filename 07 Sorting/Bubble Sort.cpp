#include <iostream>
using namespace std;

int main()
{
    int angka[5] = {10, 5, 15, 0, 12};
    int temp = 0;

    cout << "Array sebelum disorting : ";
    for (int i = 0; i < 5; i++)
    {
        cout << angka[i] << " ";
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (angka[j] > angka[j + 1])
            {
                temp = angka[j];
                angka[j + 1] = temp;
            }
        }
    }
    cout << endl;

    cout << "Array sesudah disorting : ";
    for (int i = 0; i < 5; i++)
    {
        cout << angka[i] << " ";
    }
}