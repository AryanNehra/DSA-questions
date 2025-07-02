#include<iostream>
#include<vector>
#include<queue>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x){
            cout<<1<<endl;
            continue;
        }
        if(r-max(a,b)>=x || min(a,b)-l>=x){
            cout<<2<<endl;
            continue;
        }
        if((r-b>=x && a-l>=x) || (r-a>=x && b-l>=x)){
            cout<<3<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}