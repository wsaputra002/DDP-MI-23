#include <iostream>
using namespace std;

int main()
{
    float A, B;
    cin >> A >> B;

    float penjumlahan = A + B;
    float pengurangan = A - B;
    float perkalian = A * B;
    float pembagian = A / B;

    cout << "Hasil dari Penjumlahan " << A << " dengan " << B << " adalah " << penjumlahan << endl;
    cout << "Hasil dari Pengurangan " << A << " dengan " << B << " adalah " << pengurangan << endl;
    cout << "Hasil dari Perkalian " << A << " dengan " << B << " adalah " << perkalian << endl;
    cout << "Hasil dari Pembagian " << A << " dengan " << B << " adalah " << pembagian << endl;

    return 0;
}