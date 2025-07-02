#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[v[i][0]]=i;
        }
        sort(v.begin(),v.end());
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(v[j][i]);
            }
        }
        bool flag=false;
        for(int i=1;i<m*n;i++){
            if(temp[i]<temp[i-1]){
                flag=true;
                break;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(mp[v[i][0]]+1);
        }
        // bool flag=false;
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<m;j++){
        //         if(v[i][j]-v[i][j-1]>n){
        //             flag=true;
        //             break;
        //         }
        //     }
        // }
        if(flag){
            cout<<-1;
        }else{
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}