// 1+(1+2)+(1+2+3)+(1+2+3+4)...........................
#include<iostream>
using namespace std;
 int fun(int n)
 { int m=0;
     if(n==0)
     return 0;
     else
    
     m=m+fun(n-1)+n;
     return m;
 }

 int main()
 {
     int sum=0;
     int n=5;
     int c=1;
     for(int i=1; i<=n; i++)
     {
         fun(c);
         c++;
         sum=sum+fun(c);
      }
      cout<<sum<<" "; 
      return 0;
 }
