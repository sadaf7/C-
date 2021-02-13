#include<iostream>
using namespace std;
int main()
{
    const float max_amount = 50000;
    float total_amount = 10000;
    
    int withdraw_amout;
    
    
    string N = " Hossain's Bank Ltd - Money is power" ;
    
     cout << "Welcome to " << N << endl;
     
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

     cout << "Enter the amount you want to withraw" << endl;
      cin >> withdraw_amout;
      
      if(withdraw_amout < 500)
       cout << "too low amount to cashout" << endl;
       else if (withdraw_amout > max_amount)
       cout << "too high amount to cashout" << endl;
       
       else if(withdraw_amout % 500!=0 )
       cout << "invalid amount requested" << endl;
        
        else if (withdraw_amout > total_amount)
         cout << " you only have  " << total_amount << endl;
         
         
         else {
             cout << "proceeding ";
             cout << "your remaining balance is :" << endl ;
             cout << total_amount - withdraw_amout << endl;
             total_amount -= withdraw_amout;
             
         }
        
       cout << "he checks is atm later" << endl;
       cout << total_amount;
     
    
    
    return 0;
}