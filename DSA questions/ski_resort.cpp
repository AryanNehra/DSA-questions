#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        long long ans=0;
        int i=0;
        while(i<n){
            if(a[i]>q){
                i++;
            }
            int j=i;
            while(j<n && a[j]<=q){
                j++;
                ans+=max(0,j-i-k+1);
            }
            i=j;
        }
        cout<<ans<<endl;
    }
    return 0;
}