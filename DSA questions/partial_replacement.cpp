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
        int fisrtIdx=0;
        int lastIdx=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                s[i]='x';
                fisrtIdx=i;
                ans++;
                break;
            }
        }
        for(int i=lastIdx;i>=0;i--){
            if(s[i]=='*'){
                s[i]='x';
                lastIdx=i;
                ans++;
                break;
            }
        }
        int middleLeft=n/2;
        int middleRight=n/2;
        while(middleLeft>fisrtIdx && middleRight<lastIdx){
            if(s[middleLeft]=='*'){
                s[middleLeft]='x';
                ans++;
                if(middleLeft-fisrtIdx<=k && lastIdx-middleLeft<=k){
                    break;
                }
            }
            if(s[middleRight]=='*'){
                s[middleRight]='x';
                ans++;
                if(middleRight-fisrtIdx<=k && lastIdx-middleRight<=k){
                    break;
                }
            }
            middleLeft--;
            middleRight++;
        }
        cout<<ans<<endl;
    }
    return 0;
}