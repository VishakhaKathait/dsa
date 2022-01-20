//1.	Write a program to return the maximum occurring character in the input string, e.g., if the input string is "Java" then the function should return 'a'.
#include <iostream>

using namespace std;
void counting(string s)
{
    int i, count[256]={0};
     cout<<"frequency of letters are ";
    for(i=0 ;i<s.length(); i++)
    {
        count[s[i]]++;
        cout<<count[s[i]];
    }
    
   int max=count[s[0]];
   int v=s[0];
    for(int j=1; j<s.length(); j++)
    {
         if(count[s[j]]>max)
         max=count[s[j]];
         v=s[j];
    }
    cout<<"\n the letter is"<<v;
  
  
}
int main()
{
   string s;
   cin>>s;
   counting(s);

    return 0;
}
