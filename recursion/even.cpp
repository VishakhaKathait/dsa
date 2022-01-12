#include<iostream>
using namespace std;
void printeven(int i,int n)
{
    if(n==i)
    return;
    else
    cout<<i*2;
    printeven(i+2,n);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int i=1;
    printeven(i,n);
return 0;
}



output
enter number :5
  2 4 6 8 10
