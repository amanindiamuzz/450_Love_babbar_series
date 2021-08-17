#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking size as input
    int n;
    cin>>n;
    int arr[n];
    
    //travesing through array and filling it with inputs
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    //Reversing the array
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
    
    
    //printing the values presnt in array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}