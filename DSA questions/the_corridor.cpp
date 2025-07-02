#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++){
            ll d,s;
            cin>>d>>s;
            v.push_back({d,s});
        }

        sort(v.begin(),v.end());
        ll ans=INT_MAX;
        for(int i=0;i<n;i++){
            ll d=v[i].first;
            ll s=v[i].second;
            ll val=(s-1)/2;
            val+=d;
            ans=min(ans,val);
        }
        cout<<ans<<endl;
    }
    return 0;
}