#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one=i+1;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero=i+1;
                break;
            }
        }
        if(one==0 && zero==0){
            cout<<n<<endl;
        }else if(one==0){
            cout<<zero<<endl;
        }else if(zero==0){
            cout<<n-one+1<<endl;
        }else{
            cout<<abs(one-zero)+1<<endl;
        }
    }
    return 0;
}