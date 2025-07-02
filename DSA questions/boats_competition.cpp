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
        vector<int> w(n);
        for(int i=0;i<n;i++) cin>>w[i];

        int ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[w[i]]++;
        }
        for(int i=1;i<=(2*n);i++){
            int total=0;
            for(auto ele:mp){
                int other=i-ele.first;
                if(other>=1 && mp.count(other)){
                    total+=min(ele.second,mp[other]);
                }
            }
            total/=2;
            ans=max(ans,total);
        }
        cout<<ans<<endl;
    }
    return 0;
}