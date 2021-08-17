// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int current=arr[0];
        int Max=arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>current & current<0)
            {
                current=arr[i];
            }
            
           else  if(current+arr[i]<0)
            {
                current=arr[i]; 
            }
           
            else
            current+=arr[i];
    
            
            if(Max<current) Max=current;
        }
        return Max;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends