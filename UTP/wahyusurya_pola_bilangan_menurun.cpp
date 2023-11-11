#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z ;
    
    for(int i = x; i >= y; i+=z )
        cout << i << " ";

}