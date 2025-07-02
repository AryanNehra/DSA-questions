#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans=0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                ans++;
                i+=2;
            }
            if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
                ans++;
                i+=4;
            }else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                ans++;
                i+=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}