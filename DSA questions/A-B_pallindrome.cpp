#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;

        int n=s.size()-1;
        int i=0;
        int j=n;
        int count0=0;
        int count1=0;
        for(int i=0;i<=n;i++){
            if(s[i]=='0'){
                count0++;
            }else if(s[i]=='1'){
                count1++;
            }
        }
        a-=count0;
        b-=count1;
        while(i<=j){
            if(i == j){
                if(s[i] == '?'){
                    if(a % 2 == 1){
                        s[i] = '0';
                        a--;
                    } else if(b % 2 == 1){
                        s[i] = '1';
                        b--;
                    } else {
                        break;
                    }
                } else if(s[i] == '0') {
                    a--;
                } else {
                    b--;
                }
            }else if(s[i]=='0' && s[j]=='?'){
                s[j]='0';
                a--;
            }else if(s[i]=='1' && s[j]=='?'){
                s[j]='1';
                b--;
            }else if(s[i]=='?' && s[j]=='0'){
                s[i]='0';
                a--;
            }else if(s[i]=='?' && s[j]=='1'){
                s[i]='1';
                b--;
            }else if(s[i]=='?' && s[j]=='?'){
                if(a>=2){
                    s[i]='0';
                    s[j]='0';
                    a-=2;
                }else if(b>=2){
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
            }else if(s[i]!=s[j]){
                break;
            }else{
                if(s[i]=='0'){
                    a-=2;
                }else if(s[i]=='1'){
                    b-=2;
                }
            }
            if(a<0 || b<0) break;
            i++;
            j--;
        }
        bool flag=true;
        if(!(a==0 && b==0)){
            flag=false;
        }
        for(int i=0;i<=n;i++){
            if(s[i]!=s[n-i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<s<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}