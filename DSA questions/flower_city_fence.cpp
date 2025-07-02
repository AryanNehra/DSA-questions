#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

        if(a[1]!=n){
            cout<<"no"<<endl;
            continue;
        }

        vector<int> b(n+1);
        for(int i=1;i<=n;i++){
            b[a[i]]++;
        }
        for(int i=n-1;i>0;i--){
            b[i]+=b[i+1];
        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}