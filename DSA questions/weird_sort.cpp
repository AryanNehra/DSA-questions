#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<algorithm>

using namespace std;

void bfs(int start,vector<list<int>> &adj,vector<bool> &vis,vector<int> &comp){
    queue<int> q;
    q.push(start);
    vis[start]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        comp.push_back(node);

        for(auto neighbour:adj[node]){
            if(!vis[neighbour]){
                vis[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> p(m);
        for(int i=0;i<m;i++) cin>>p[i];

        vector<list<int>> adj(n);
        for(int i=0;i<m;i++){
            int u=p[i]-1;
            int v=p[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n,false);
        vector<int> ans=a;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int> comp;
                bfs(i,adj,vis,comp);

                vector<int> values;
                for(int idx:comp){
                    values.push_back(a[idx]);
                }

                sort(values.begin(),values.end());
                sort(comp.begin(),comp.end());
                
                for(int j=0;j<comp.size();j++){
                    ans[comp[j]]=values[j];
                }
            }

        }

        bool sorted=true;
        for(int i=0;i<n-1;i++){
            if(ans[i]>ans[i+1]){
                sorted=false;
                break;
            }
        }
        if(sorted){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}