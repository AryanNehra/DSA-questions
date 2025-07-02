#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

static bool cmp(int a,int b){
    return b<a;
}

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> arr(k);
        for(int i=0;i<k;i++){
            cin>>arr[i].first>>arr[i].second;
        }

        vector<int> cost(k+1,0);
        for(int i=0;i<k;i++){
            cost[arr[i].first-1]+=arr[i].second;
        }
        sort(cost.begin(),cost.end(),cmp);
        int ans=0;
        for(int i=0;i<min(n,k);i++){
            ans+=cost[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}