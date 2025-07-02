#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        long long ans=0;
        map<tuple<long long,long long,long long>,long long> mp;
        for(int i=0;i<n-2;i++){
            ans+=(mp[{v[i],v[i+1],0}]+mp[{v[i],0,v[i+2]}]+mp[{0,v[i+1],v[i+2]}]-3*mp[{v[i],v[i+1],v[i+2]}]);
            mp[{v[i],v[i+1],0}]++;
            mp[{v[i],0,v[i+2]}]++;
            mp[{0,v[i+1],v[i+2]}]++;
            mp[{v[i],v[i+1],v[i+2]}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}