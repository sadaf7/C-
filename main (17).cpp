
#include <iostream>

using namespace std;

int main()
{
 
 int option;
 
 int A = 500;
 int B = 1000;
 cout << "choose an option"<< endl;
 
 cin >> option;
 
 if (option == 1)
 {
     cout << "Your amount  " << A << endl;
 }
  
 else if(option == 2)
  {
      cout << "Your amount  " << B << endl;
  }
  
  else 
  {
      cout << "incorrect" << endl;
  }
    return 0;
}
