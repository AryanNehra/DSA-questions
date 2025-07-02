#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        long long maxFreq=0;
        map<char,long long> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            maxFreq=max(maxFreq,mp[s[i]]);
        }

        if(maxFreq>n/2){
            cout<<(n-(n-maxFreq)*2)<<endl;
        }else{
            cout<<n%2<<endl;
        }
    }
    return 0;
}