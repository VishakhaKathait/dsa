//print  n natural number in reverse order
#include <iostream>

using namespace std;
void print(int n)
{
    if(n==0)
    return ;
    else
    cout<<n<<" ";
      print(n-1) ;
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
  10 9 8 7 6 5 4 3 2 1 
