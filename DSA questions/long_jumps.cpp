#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> dp(n);
        for(int i=n-1;i>=0;i--){
            dp[i]=a[i];
            int j=i+a[i];
            if(j<n){
                dp[i]+=dp[j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}