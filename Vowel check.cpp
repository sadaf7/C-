#include<iostream>
using namespace std;
int main()
{
  char C;
  int upper_case_vowel;
  int lower_case_vowel;
  cout << "Enter an Alphebet" << endl;
  cin >> C;
   
   upper_case_vowel = (C == 'A') || (C == 'E') || (C == 'I') || (C == 'O') || (C == 'U');
   lower_case_vowel = (C == 'a') || (C == 'e') || (C == 'i') || (C == 'o') || (C == 'u');
   if(!isalpha(C))
   cout << "Invalid Character" << endl;
   else if (upper_case_vowel ||lower_case_vowel)
   {
       cout << C << " is a vowel " << endl;
   }
       else {
           cout << C << " is a constant " << endl; 
         
       }
   
   
    
    
    return 0;
}