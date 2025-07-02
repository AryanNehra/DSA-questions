#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>> temp(n);
        for(int i=0;i<n;i++){
            temp[i]=make_pair(a[i],i);
        }
        sort(temp.begin(),temp.end());
        sort(b.begin(),b.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[temp[i].second]=b[i];
        }
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}