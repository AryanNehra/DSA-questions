#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<int> m(n);
        for(int i=0;i<n;i++) cin>>m[i];

        int last=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            long long keepOn=1LL*a*(m[i]-last);
            long long turnOffAndOn=b;
            long long req=min(keepOn,turnOffAndOn);
            f-=req;
            last=m[i];

            if(f<=0){
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