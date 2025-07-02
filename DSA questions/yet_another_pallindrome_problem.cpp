#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        string ans="no";
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i);
        }

        for(auto ele:mp){
            if(ele.second.size()>=3){
                ans="yes";
                break;
            }
        }

        for(auto ele:mp){
            if(ele.second.size()==2 && ele.second[0]!=ele.second[1]-1){
                ans="yes";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}