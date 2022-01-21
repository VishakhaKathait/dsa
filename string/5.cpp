//5.	Write a program to print all permutations of a given String in Java/C/Python or any programming language of your choice. For example, if given input is "123" then your program should print all 6 permutations e.g. "123", "132", "213", "231", "312" and "321".


#include <iostream>
#include<string.h>
using namespace std;
void perm(string s, int l, int r)
{
    if(l==r)
    cout<<s<<" ";
    else
    for(int i=l; i<=r;i++)
    {
        swap(s[l],s[i]);
        perm(s,l+1,r);
        swap(s[i],s[l]);
    }
}

int main()
{
    string s;
    cin>>s;
    int size=s.length()-1;
    perm(s,0,size);
    return 0;
}
