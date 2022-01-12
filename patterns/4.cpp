#include <iostream>

using namespace std;

int main()
{
     for(int i=0; i<5; i++)
  {
      for(int j=i; j>0;j--)
      {
          cout<<" ";
      }
      for(int k=5-i; k>0; k-- )
      {
          cout<<"*";
      }
      for(int m=5-1-i; m>0; m--)
      {
          cout<<"*";
      }
      cout<<"\n";
  }
  

    return 0;
}



output


*********
 *******
  *****
   ***
    *
