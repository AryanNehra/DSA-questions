#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> pre(n);
        if(s[0]=='1'){
            pre[0]=1;
        }else{
            pre[0]=0;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                pre[i]=pre[i-1]+1;
            }else{
                pre[i]=pre[i-1];
            }
        }
        int ans=-1;
        if(pre[n-1]>=(n+1)/2){
            ans=0;
        }
        for(int i=0;i<n;i++){
            int l1=pre[i];
            int l0=i+1-l1;
            int r1=pre[n-1]-pre[i];
            int r0=n-i-1-r1;
            if(l0>=l1 && r1>=r0){
                if(abs(n-2*ans)>abs(n-2*(i+1))){
                    ans=i+1;
                }
            }
        }
        if(ans==0) ans=0;
        cout<<ans<<endl;
    }
    return 0;
}