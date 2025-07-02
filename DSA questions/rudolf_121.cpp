#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        bool flag=true;

        for(int i=0;i<n-2;i++){
            if(v[i]==0){
                continue;
            }else if(v[i]<0){
                flag=false;
                break;
            }else{
                long long x=v[i];
                v[i]-=x;
                v[i+1]-=2*x;
                v[i+2]-=x;
            }
        }
        if(v[n-2]!=0 || v[n-1]!=0){
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