//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
             const int num_bits = 16;
              d = d % num_bits;
            vector<int>vec;
            int a=n>>d;
            int b=n<<d;
            int left_rotation = ((n << d) | (n >> (num_bits - d)))& 0xFFFF;
            int right_rotation = ((n >> d) | (n << (num_bits - d)))& 0xFFFF;
           vec.push_back(left_rotation);
           vec.push_back(right_rotation);
            return vec;
        }
        
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends