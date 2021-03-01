#include<iostream>
using namespace std;
int main()
{
    double farn, cels;
    cout << "Enter Fehrenheit : " ;
    cout << endl;
    cin >> farn;
    
    cels = (farn - 32) / 1.8;
    cout << "celsius : " << cels;
    
    
    
    return 0;
}