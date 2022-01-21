//4.	Write a program to reverse a String in C/Java/Python or choice of your programming language. You can write either the recursive or iterative solution. For example, if a given input is "abcd," then your function should return "dcba".


#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans;
    int n=s.length();
    int i=0;
    int j=s.length()-1;
 while(i<s.length() && j>=0)
 {
     ans[i]=s[j];
     i++;
     j--;
 }
for(int i=0; i<s.length(); i++)
{
    cout<<ans[i];
}
    return 0;
}
