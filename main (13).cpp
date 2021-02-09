#include<iostream>
using namespace std;

int main()
{
    
    int number ;
    
   cout << "enter a number " << endl;
   
   cin >> number ;
   
   if(number > 0 )
   
   cout << "your positive number is : " << number << endl;
   
   else if (number < 0 )
   
  cout << "your negative number is : " << number;
  

   else {
       cout << "you entered " << number;
   }
    
    
    
    
    return 0;
}