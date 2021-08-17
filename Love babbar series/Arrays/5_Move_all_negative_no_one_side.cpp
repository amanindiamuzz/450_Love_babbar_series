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
    
    int j=0;
   for(int i=0;i<n;i++)
   {
     if(arr[i]<0)   {swap(arr[i],arr[j]); j++;}
   }
    
   
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}