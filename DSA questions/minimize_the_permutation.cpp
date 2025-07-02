#include<iostream>
#include<vector>

using namespace std;

int idx_of_min(vector<int> v,int j){
    int min=v[j];
    int idx=j;
    for(int i=j+1;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
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
        for(int i=0;i<n;i++) cin>>v[i];

        vector<bool> used(n-1,false);

        for(int i=0;i<n;i++){
            int min_ele_idx=idx_of_min(v,i);
            if(min_ele_idx==i) continue;
            while(min_ele_idx>0 && min_ele_idx!=i && !used[min_ele_idx-1]){
                swap(v[min_ele_idx],v[min_ele_idx-1]);
                used[min_ele_idx-1]=true;
                min_ele_idx=min_ele_idx-1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}