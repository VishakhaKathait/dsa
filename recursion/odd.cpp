#include <iostream>

using namespace std;

    void printodd(int n)
{
    if(n==0)
    return;
    else
   printodd(n-1);
   cout<<2*n-1<<" ";
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    
    printodd(n);

    return 0;
}


output
enter number : 5
  1 3 5 7 9
