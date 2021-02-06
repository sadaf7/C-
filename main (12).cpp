

#include <iostream>

using namespace std;

int main()
{

   float D  = 55.589;
   
   double F = 482.45678945;
   
   long double ok = F + D;
   
   cout << ok << endl ;
   
   long double J = ok;
   
   float G = 5.45;
   
   long double K = J - G ;
   
   cout << K << endl;
   
   // implicit conversion; 
   // double to integer;
   
    long double rahi = K;

    long int I ;
    
    I = rahi ;
    
    cout << "integer_num : " << I << endl;
    
    cout << "double_num : " << rahi << endl ;
    
    int age = I;
    
    cout << "my age is : " << age ;
    
    
    return 0;
}
