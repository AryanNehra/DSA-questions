#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int ans=0;
        int rem=n%k;
        ans+=n-rem;
        if(rem>=k/2){
            ans+=k/2;
        }else{
            ans+=rem;
        }
        cout<<ans<<endl;
    }
    return 0;
}