#include <iostream>

using namespace std;

int main()
{
     for(int i=0 ;i<5; i++)
  {
      for(int j=5-1-i; j>0; j--)
      {
          cout<<" ";
      }
      for(int k=0; k<=i; k++)
      {
          cout<<"*";
      }
      for(int m=i; m>0; m-- )
      {
          cout<<"*";
      }
      cout<<"\n";
  }
 
 for(int i=0; i<4; i++)
 {
     for(int j=0; j<=i; j++)
     {
         cout<<" ";
     }
     for(int k=4-i; k>0; k--)
     {
         cout<<"*";
     }
     for(int m=4-1-i; m>0; m--)
     {
         cout<<"*";
     }
     cout<<"\n";
 }
 

    return 0;
}

   output


        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
