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
    
    //finding minimum value and maximum value in array
    int Min=INT_MAX,Max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<Min) Min=arr[i];
        if(arr[i]>Max) Max=arr[i];
    }
    
    //Printing values
    cout<<Min<<" "<<Max;
}