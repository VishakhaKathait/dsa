#include <iostream>

using namespace std;
void display(int n)
{
    if(n==0)
    return;
    else
    cout<<1<<"/"<<n<<" ";
    display(2*n);
    
}
int main()
{
   display(1);

    return 0;
}



output
1 1/2 1/4 1/8 ............................
