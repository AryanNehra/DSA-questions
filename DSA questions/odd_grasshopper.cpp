#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;

        long long ans;
        if(x==0){
            if(n%4==1){
                ans=-1*n;
            }else if(n%4==2){
                ans=1;
            }else if(n%4==3){
                ans=n+1;
            }else{
                ans=0;
            }
        }else{
            if(x%2==0){
                if(n%4==1){
                    ans=(-1)*n;
                }else if(n%4==2){
                    ans=1;
                }else if(n%4==3){
                    ans=n+1;
                }else{
                    ans=0;
                }
                ans=x+ans;;
            }else{
                if(n%4==1){
                    ans=-1*n;
                }else if(n%4==2){
                    ans=1;
                }else if(n%4==3){
                    ans=n+1;
                }else{
                    ans=0;
                }
                ans=x-ans;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}