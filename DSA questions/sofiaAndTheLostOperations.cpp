#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int m;
        cin>>m;
        vector<int> d(m);
        for(int i=0;i<m;i++) cin>>d[i];

        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                mp1[b[i]]++;
            }
        }
        for(int i=0;i<m;i++){
            mp2[d[i]]++;
        }
        bool flag=true;
        for(auto ele:mp1){
            if(mp2[ele.first]<ele.second){
                flag=false;
            }
        }
        if(count(b.begin(),b.end(),d[m-1])==0){
            flag=false;
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}