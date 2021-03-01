#include<iostream>
using namespace std;
int main()
{
    double farn, cels;
    cout << "Enter Celsius : " ;
    cout << endl;
    cin >> cels;
    
    double fern = 1.8 * cels + 32;
    cout << "Fehrenheit : " << fern;
    
    
    
    return 0;
}