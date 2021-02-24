#include <iostream>
using namespace std;
int main()
{
    int num ;
    int sum;
    sum = 0;
    cout << "ENter positive integer " << endl;
    cin>> num;
    for (int count = 1; count<=num;++count){
        sum += count;
    }
    cout << "Sum = " << sum<< endl;
    
    
    return 0;
}
