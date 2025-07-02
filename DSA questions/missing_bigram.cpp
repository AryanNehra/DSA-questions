#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> a(n-2);
        for(int i=0;i<n-2;i++) cin>>a[i];

        string ans="";
        ans+=a[0][0];
        for(int i=0;i<n-3;i++){
            if(a[i][1]==a[i+1][0]){
                ans+=a[i][1];
            }else if(a[i][1]!=a[i+1][0]){
                ans+=a[i][1];
                ans+=a[i+1][0];
            }
        }
        while(ans.size()!=n){
            ans+=a[n-3][1];
        }
        cout<<ans<<endl;
    }
    return 0;
}