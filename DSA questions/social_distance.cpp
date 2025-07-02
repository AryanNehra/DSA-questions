#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(i-k>0 && i+k<n){
                    bool flag=true;
                    for(int j=i-k;j<=i+k;j++){
                        if(s[j]=='1'){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        s[i]='1';
                        ans++;
                    } 
                }else if(i-k<=0 && i+k<n){
                    bool flag=true;
                    for(int j=0;j<=i+k;j++){
                        if(s[j]=='1'){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        s[i]='1';
                        ans++;
                    }
                }else if(i-k>0 && i+k>=n){
                    bool flag=true;
                    for(int j=i-k;j<n;j++){
                        if(s[j]=='1'){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        s[i]='1';
                        ans++;
                    }
                }else if(i-k<0 && i+k>=n){
                    bool flag=true;
                    for(int j=0;j<n;j++){
                        if(s[j]=='1'){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        s[i]='1';
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}