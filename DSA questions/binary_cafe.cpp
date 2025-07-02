#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0;
        int idx=-1;
        for(int i=0;i<k;i++){
            sum+=(1<<i);
            if(sum>n){
                sum-=(1<<i);
                idx=i;
                break;
            }
        }

        long ans=(idx==-1) ? (1<<k) : (1<<idx)+(n-sum);
        cout<<ans<<endl; 
    }
    return 0;
}