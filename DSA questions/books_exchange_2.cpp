#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) v[i]--;

        vector<int> ans(n,0);
        vector<int> vis(n,false);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int> cycle;
                int curr=i;
                while(!vis[curr]){
                    vis[curr]=true;
                    cycle.push_back(curr);
                    curr=v[curr];
                }
                for(int ele:cycle){
                    ans[ele]=cycle.size(); 
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}