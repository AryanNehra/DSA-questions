#include<iostream>
#include<vector>

using namespace std;

void dfs(int i,vector<int> &v,int j,int &cnt){
    cnt++;
    if(i==j){
        return ;
    }

    dfs(i,v,v[j],cnt);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        for(int i=0;i<n;i++) v[i]--;

        for(int i=0;i<n;i++){
            int cnt=0;
            dfs(i,v,v[i],cnt);
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
    return 0;
}