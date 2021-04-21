#include<iostream>
using namespace std;
int main()
{
    int A[3][3]={
                 {35,15,75},
                 {45,45,45},
                 {85,95,15}
                };
  for(int i=0;i<3;++i)
  {
      for(int j=0;j<3;++j)
      {
          cout << A[i][j]<< " ";
      }
      cout << endl;
  }


}
