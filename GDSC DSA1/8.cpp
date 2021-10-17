// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>ans;
        int left=0,right=0,sum=0;
        for(int i=0;i<n;i++)
        {
        
            if(sum==s)
            {
                ans.emplace_back(left);
                ans.emplace_back(right);
                return ans;
            }
            else if(sum<s)
            {
                sum=arr[right];
                right++;
            }
            else
            {
                sum=arr[left];
                left++;
            }
                
        
        }
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends