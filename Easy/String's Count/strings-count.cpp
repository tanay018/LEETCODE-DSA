//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
    vector<long long int >vec(n+1,-1);
    vec[0]=0;
    vec[1]=3;
    vec[2]=8;
    if(n<3){
        return vec[n];
    }
    //long long int a=39;
    
    long long int sum=5;
    long long int sum2=6;
    for(int i=3;i<=n;i++){
        vec[i]=vec[i-1]+sum+sum2;
        sum=sum+sum2;
        sum2+=3;
        
        
    }
    //cout<<sum<<" "<<sum2<<" "<<vec[n-1]<<" " ;
    return vec[n];
}