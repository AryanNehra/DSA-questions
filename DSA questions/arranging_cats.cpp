#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,f;
        cin>>s>>f;

        int add=0;
        int remove=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && f[i]!=s[i]){
                add++;
            }else if(s[i]=='0' && f[i]!=s[i]){
                remove++;
            }
        }
        int mini=min(add,remove);
        int ans=add+remove-mini;
        cout<<ans<<endl;
    }
    return 0;
}