//3. Given an unsorted array of n integers, write a program to sort the array using insertion sort.
#include <iostream>

using namespace std;



void insertion(int arr[10], int n)
{
    for(int i=1;i<n; i++)
    {
        int k=arr[i];
        int j=j-1;
        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
       
      
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
   insertion(arr,n);
      cout<<"sorted array :";
     for(int i=0; i<n;i ++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
