#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<long long> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+v[i];
        }
        int ans=0;
        for(int k=1;k<=n;k++){
            if(n%k!=0) continue;
            int i=0;
            long long max_sum=LLONG_MIN;
            long long min_sum=LLONG_MAX;
            while(i<n){
                long long sum=prefix[i+k]-prefix[i];
                max_sum=max(max_sum,sum);
                min_sum=min(min_sum,sum);
                i=i+k;
            }
            ans=max(ans,(int(max_sum-min_sum)));
        }
        cout<<ans<<endl;
    }
    return 0;
}