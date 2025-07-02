#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int minLR=min(mp['L'],mp['R']);
        int minUD=min(mp['U'],mp['D']);

        if(minLR==0 && minUD==0){
            cout<<0<<endl<<" "<<endl;
        }else if(minLR==0){
            cout<<2<<endl<<"UD"<<endl;
        }else if(minUD==0){
            cout<<2<<endl<<"LR"<<endl;
        }else{
            string ans="";
            ans+=string(minLR,'L');
            ans+=string(minUD,'U');
            ans+=string(minLR,'R');
            ans+=string(minUD,'D');
            cout<<ans.size()<<endl<<ans<<endl;
        }
    }
    return 0;
}