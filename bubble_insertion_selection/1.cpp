//1. Given an unsorted array of n integers, write a program to sort the array using bubble sort.
#include <iostream>

using namespace std;

void bubble(int arr[10], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bubble(arr,n);
      cout<<"sorted array :";
     for(int i=0; i<n;i ++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
