#include <iostream>

using namespace std;
void print(int n)
{
    if(n==0)
    return ;
    else
      print(n-1) ;
    cout<<n <<" ";  
}
int main()
{
   int n;
   cout<<"enter number: ";
   cin>>n;
   print(n);
    return 0;
}


output
enter number: 10
1 2 3 4 5 6 7 8 9 10
