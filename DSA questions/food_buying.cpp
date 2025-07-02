#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s;
        cin>>s;

        int ans=0;
        int pw=1e9;
        while(s>0){
            while(s<pw){
                pw/=10;
            }
            ans+=pw;
            s=s-pw+pw/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}