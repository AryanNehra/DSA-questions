#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
 
using namespace std;

static bool cmp(int a,int b){
    return a>b;
}
 
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[a[i]].push_back(i+1);
    }
    sort(a.begin(),a.end(),cmp);
    int count=0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        count+=(a[i]*i+1);
    }
    int i=0;
    while(i<n){
        for(auto ele:mp[a[i]]){
            ans.push_back(ele);
        }
        i+=mp[a[i]].size();
    }
    cout<<count<<endl;
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}