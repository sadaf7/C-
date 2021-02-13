#include<iostream>
using namespace std;
int main()
{
    int option;
    int A = 500;
    int B = 1000;
    
    char select;
    cout << "For option press A" << endl;
    cin >> select;
    
    cout << "Choose an option " << endl;
    cin >> option;
    
        if(option == 1)
     {   
         cout << "your amount " << A << endl;
      }
    
        else if(option == 2)
      {
          cout << "your amount " <<B <<endl ;
    }
    
    else 
     {
         cout << "Invalid amount" << endl;
    }
    
    return 0;
    
    
    
}
