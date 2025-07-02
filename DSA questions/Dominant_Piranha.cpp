#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int ans=-1;
        int mx=a[0];
        for(auto ele:a){
            mx=max(ele,mx);
        }
        vector<int> idx;
        for(int i=0;i<n;i++){
            if(a[i]==mx){
                idx.push_back(i);
            }
        }
        for(int i=0;i<idx.size();i++){
            if(idx[i]-1>=0 && a[idx[i]-1]<mx){
                ans=idx[i]+1;
                break;
            }else if(idx[i]+1<n && a[idx[i]+1]<mx){
                ans=idx[i]+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}