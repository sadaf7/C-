#include<iostream>
using namespace std;
int main()
{
    int luckyNumbers[5];
    /*cout << luckyNumbers << endl;
    cout << &luckyNumbers << endl;
    cout << &luckyNumbers[3] << endl;
    cout << *luckyNumbers +1 << endl;
    cout << *luckyNumbers +3 << endl;*/

    for(int i=0;i<5;++i)
    {
        cout << "Enter the numbers " << i+1 << " = " ;
        cin >> luckyNumbers[i];
    }
    cout << "The Numbers are : ";
    for (int i=0;i<5;++i)
    {
        cout <<  *(luckyNumbers+i)<< " ";
    }
}
