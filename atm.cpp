#include<iostream>
using namespace std;
int main()
{
    const float max_amount = 50000;
    float total_amount = 10000;
    int withdraw_amout;
    
    string N = " Hossain's Bank Ltd - Money is power" ;
    
     cout << "Welcome to " << N << endl;
     
     cout << "Enter the amount you want to withraw" << endl;
      cin >> withdraw_amout;
      
      if(withdraw_amout < 500)
       cout << "too low amount to cashout" << endl;
       else if (withdraw_amout > max_amount)
       cout << "too high amount to cashout" << endl;
       
       else if(withdraw_amout % 500!=0 )
       cout << "invalid amount requested" << endl;
        
        else if (withdraw_amout > total_amount)
         cout << "fuck off you only have  " << total_amount << endl;
         
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
