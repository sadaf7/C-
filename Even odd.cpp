#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an number " << endl;
    cin >> number;
    if (number !=0){
        if ((number %2)==0){
        cout << "The number is even " << endl;
        }
        else {
            cout << "The number is odd " << endl;
        }
    }
     else {
         cout << "Invalid number " << endl ;
      } 
     
    
    
    
    return 0;
}
