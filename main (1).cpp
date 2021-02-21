#include<iostream>
using namespace std;
int main()
{
    float total_amount_in_account = 5000;
    int option;
     char F;
    cin>> F;
    string M = "Banla Bank ";
    cout << "Welcome to " << M <<endl;
    
    cout << "Press A for option" << endl;
     
     int A = 500;
     int B = 1000;
     int C = 1500;
     int D = 2000;
     int E = 2500;
     float total_amount_in_atm = 200000;
     cin >> option;
     
     if (option == 1 && total_amount_in_account - A >= 0 )
    {
     cout << "Your Amount : " << A <<endl;
     total_amount_in_account -= A;
     total_amount_in_atm -= A;  
    }
    else if( option == 2 && total_amount_in_account - B >= 0)
    {
        cout << "Your Amount : " << endl;
        total_amount_in_account -= B;
        total_amount_in_atm -= B;
        }
    else if (option == 3 && total_amount_in_account - C >= 0)
    {
        cout  << "Your Amount : " << endl;
        total_amount_in_account -= C;
        total_amount_in_atm -= C;
    }
    else if (option == 4 && total_amount_in_account - D >= 0)
    {
        cout << "Your Amount : " << endl;
        total_amount_in_account -= D;
        total_amount_in_atm -= D;
    }
    else if (option == 5 && total_amount_in_account -E >= 0)
    {
        cout << "Your Amount : " << endl;
        total_amount_in_account -= E;
        total_amount_in_atm -= E;
    }
    
    else if (option == 6)
    {
    int entered_amount;
    cout << "Enter The Amount You Want to withdraw " << endl;
    cin >> entered_amount;
    }
    else if (entered_amount > 0)
    
    {
        cout << " Your Cashout Amount : "  << endl;
        total_amount_in_account -= entered_amount;
        total_amount_in_atm -= entered_amount;
    }
    else if (entered_amount < total_amount_in_atm)
    {
        cout << " Your Cashout Amount : " << endl;
        total_amount_in_account -= entered_amount;
        total_amount_in_atm -= entered_amount;
    }
     
     else if (entered_amount %500 = 0)
     {
     cout << "Your Cashout Amount : " << endl;
     total_amount_in_account -= entered_amount;
        total_amount_in_atm -= entered_amount;
     }
     
     else if (entered_amount < total_amount_in_account)
     {
         cout << "Your Cashout Amount" << endl;
         total_amount_in_account -= entered_amount;
        total_amount_in_atm -= entered_amount;
         
     }
    
    else 
    {   
        cout<< "Invalid Amount Requested or You dont have enough balance " << endl;
    }
   
   
   return 0; 
}