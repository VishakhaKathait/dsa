//3.	Write a program to test if two given String is a rotation of each other or not, e.g. if the given String is "XYZ" and "ZXY" then your function should return true, but if the input is "XYZ" and "YXZ" then return false.


#include <iostream>
#include<string.h>

using namespace std;
bool rotateString(string s, string goal) {
      string str;
        str=s+s;
        if(str.find(goal))
            return true;
        else
            return false;
}
int main()
{
   string s;
   cout<<"enter string 1";
   cin>>s;
   string goal;
   cout<<"\n enter string 2";
  cin>>goal;
  cout<<rotateString(s,goal);
  

    return 0;
}
