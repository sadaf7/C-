#include<iostream>
using namespace std;
int main()
{
    int num;
    
    cout << "enter a number" << endl;
    
    cin >> num;
    
    if( num > 0 )
    
    cout << "the positive number is : " << num << endl;
    
    else if (num < 0)
    cout << "the negative number is : " << num << endl;
    
    else {
        cout <<  "you enterd 0 ";
    }

    if(num != 0)
    {
        if(( num %2) == 0){
            cout << "the number is even  " << endl;
        }
        else 
        {
            cout << "the number is odd  " << endl;
        }
    }
      
      
      
      
    return 0;
}