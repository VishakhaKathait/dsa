//2. Given an unsorted array of n integers, write a program to sort the array using selection sort.
#include <iostream>
using namespace std;

void selection(int arr[10], int n)
{
    for(int i=0 ;i<n-1; i++)
    {
        int min= arr[i];
        int idx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                idx=j;
            }
        }
       int temp=0;
       temp=arr[i];
       arr[i]=arr[idx];
       arr[idx]=temp;
    }
}
int main()
{
    int arr[10],n;
    cin>>n;
    for(int i=0 ;i<n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"unsorted array :";
    for(int i=0; i<n;i ++)
    {
        cout<<arr[i]<<endl;
    }
   selection(arr,n);
      cout<<"sorted array :";
     for(int i=0; i<n;i ++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
