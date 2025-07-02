#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int index_of_max(vector<int> v){
    int n=v.size();
    int max=v[0];
    int idx=0;
    for(int i=1;i<n;i++){
        if(v[i]>max){
            max=v[i];
            idx=i;
        }
    }
    return idx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int max_ele_idx=index_of_max(v);
            if(max_ele_idx!=n-i-1){
                ans.push_back({max_ele_idx+1,n-i,1});
            }
            v.erase(v.begin()+max_ele_idx);
        }
        cout<<ans.size()<<endl;
        for(auto ele:ans){
            cout<<ele[0]<<" "<<ele[1]<<" "<<ele[2]<<endl;
        }
        
    }
    return 0;
}