//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int firstOccurrence(int arr[], int x,int n) {
    int low = 0;
    int high = n - 1;
    int result = -1; // Initialize result to -1

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid; // Update result if found, but continue searching for the first occurrence
            high = mid - 1; // Continue searching in the left subarray
        } else if (arr[mid] < x) {
            low = mid + 1; // Search in the right subarray
        } else {
            high = mid - 1; // Search in the left subarray
        }
    }

    return result;
}

// Function to find the last occurrence of x in the sorted array
int lastOccurrence(int arr[], int x,int n) {
    int low = 0;
    int high = n - 1;
    int result = -1; // Initialize result to -1

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid; // Update result if found, but continue searching for the last occurrence
            low = mid + 1; // Continue searching in the right subarray
        } else if (arr[mid] < x) {
            low = mid + 1; // Search in the right subarray
        } else {
            high = mid - 1; // Search in the left subarray
        }
    }

    return result;
}
    vector<int> find(int arr[], int n , int x )
    {
        // code here
         int firstIndex = firstOccurrence(arr, x,n);
    int lastIndex = lastOccurrence(arr, x,n);
    vector<int> ans={firstIndex,lastIndex};
    
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends