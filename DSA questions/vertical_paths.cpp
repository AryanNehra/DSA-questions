#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<algorithm>

using namespace std;

vector<list<int>> g;
void add_edge(int src,int dest,bool bi_dir=true){
    g[src].push_back(dest);
    if(bi_dir){
        g[dest].push_back(src);
    }
}

void dfs(int src,vector<bool> &vis,vector<int> &temp){
    vis[src]=true;
    temp.push_back(src);
    for(auto neighbour:g[src]){
        if(!vis[neighbour]){
            dfs(neighbour,vis,temp);
            return;
        }
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++) cin>>p[i];

        g.clear();
        g.resize(n+1);
        int root=0;
        set<int> s;
        for(int i=1;i<=n;i++){
            s.insert(p[i]);
            if(p[i] == i){
                root = i;
            } else {
                add_edge(i, p[i], false);
            }
        }
        vector<int> leaves;
        for(int i=1;i<=n;i++){
            if(!s.count(i)){
                leaves.push_back(i);
            }
        }
        vector<vector<int>> ans;
        vector<bool> vis(n+1,false);
        for(int i=0;i<leaves.size();i++){
            if(!vis[leaves[i]]){
                vector<int> temp;
                dfs(leaves[i],vis,temp);
                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    ans.push_back(temp);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                vector<int> temp;
                dfs(i,vis,temp);
                if(!temp.empty()){
                    ans.push_back(temp);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto ele:ans){
            cout<<ele.size()<<endl;
            for(auto a:ele){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}