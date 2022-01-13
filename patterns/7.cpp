#include <iostream>

using namespace std;

int main()
{
    for(int i=0 ;i<6; i++)
    {
        int m=5;
        for(int j=0; j<=i; j++)
        {
            cout<<m;
            m--;
        }
        cout<<"\n";
    }
    for(int i=0; i<5; i++)
    {
        int m=5;
        for(int j=5-i; j>0 ; j--)
        {
            cout<<m;
            m--;
        }
        cout<<"\n";
    }

    return 0;
}



output

5
54
543
5432
54321
543210
54321
5432
543
54
5
