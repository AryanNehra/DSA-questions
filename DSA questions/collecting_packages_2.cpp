#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
        pair<int,int> curr=make_pair(0,0);
        string ans="";
        bool flag=true;
        for(int i=0;i<n;i++){
            int r=v[i].first-curr.first;
            int u=v[i].second-curr.second;
            if(r<0 || u<0){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            ans+=string(r,'R');
            ans+=string(u,'U');
            curr=v[i];
        }
        if(flag){
            cout<<"YES"<<endl<<ans<<endl;
        }
    }
    return 0;
}