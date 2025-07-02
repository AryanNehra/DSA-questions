#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,S;
        cin>>a>>b>>n>>S;
        int val=min(a,S/n);
        int left=S-val*n;
        if(b>=left){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}