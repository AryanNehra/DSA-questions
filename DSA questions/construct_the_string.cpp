#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string ans="";
        for(int i=0;i<n;i++){
            ans+=char('a'+i%b);
        }
        cout<<ans<<endl;
    }
    return 0;
}