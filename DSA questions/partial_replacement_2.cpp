#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int ans=0;
        int i=0;
        while(s[i]!='*') i++;
        s[i]='x';
        ans++;
        while(i<n){
            int nxt=-1;
            for(int j=min(n-1,i+k);j>i;j--){
                if(s[j]=='*'){
                    nxt=j;
                    break;
                }
            }
            if(nxt==-1) break;
            s[nxt]='x';
            ans++;
            i=nxt;
        }
        cout<<ans<<endl;
    }
    return 0;
}