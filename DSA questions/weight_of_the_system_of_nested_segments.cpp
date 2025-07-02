#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<pair<int,int>,int>> v;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({{y,x},i+1});
        }

        sort(v.begin(),v.end());
        int ans=0;
        vector<pair<int,int>> ind;
        for(int i=0;i<2*n;i++){
            ans+=v[i].first.first;
            ind.push_back({v[i].first.second,v[i].second});
        }
        cout<<ans<<endl;
        sort(ind.begin(),ind.end());
        for(int i=0;i<n;i++){
            cout<<ind[i].second<<" "<<ind[2*n-i-1].second<<endl;
        }
    }
    return 0;
}