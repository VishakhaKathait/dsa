#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0|| n==1)
    return n;
    else
    
     return 1/ (fun(n-1.0)*fun(n-1.0));
}
int main()
{
   
    int c;
    cin>>c;
    int sum=0;
    fun(c);
    sum=sum+fun(c);
    cout<<sum;
    return 0;
}
