#include<iostream>
#include<vector>

using namespace std;

bool good(vector<int> v,int start){
    int i=start;
    int j=v.size()-1;
    vector<int> temp;
    while(i<=j){
        if(v[i]<v[j]){
            temp.push_back(v[i]);
            i++;
        }else if(v[i]>v[j]){
            temp.push_back(v[j]);
            j--;
        }else{
            temp.push_back(v[i]);
            i++;
        }
    }
    bool flag=true;
    for(int k=1;k<temp.size();k++){
        if(temp[k]<temp[k-1]){
            flag=false;
            break;
        }
    }
    return flag;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        if(good(a,0)){
            cout<<0<<endl;
            continue;
        }

        int idx=1;
        for(int i=1;i<n;i++){
            if(good(a,i)){
                idx=i;
                break;
            }
        }
        cout<<idx<<endl;
    }
    return 0;
}