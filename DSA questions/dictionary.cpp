#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int ans=0;
        char ch1=s[0];
        char ch2=s[1];
        if(ch1>ch2){
            int num=25*(ch1-'a')+1;
            ans=num+(ch2-'a');
        }else{
            int num=25*(ch1-'a')+1;
            ans=num+(ch2-'a'-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}