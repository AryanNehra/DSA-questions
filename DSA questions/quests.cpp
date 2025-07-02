#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<long long> pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        vector<int> max_upto_i(n);
        max_upto_i[0]=b[0];
        for(int i=1;i<n;i++){
            max_upto_i[i]=max(max_upto_i[i-1],b[i]);
        }
        long long ans=0;

        for(int i=0;i<min(n,k);i++){
            long long sum=pre[i]+(k-i-1)*max_upto_i[i];
            ans=max(ans,sum);

        }
        cout<<ans<<endl;
    }
    return 0;       
}