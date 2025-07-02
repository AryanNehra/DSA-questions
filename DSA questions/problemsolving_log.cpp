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
        string s;
        cin>>s;

        vector<int> v(26);
        for(int i=0;i<n;i++){
            v[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(v[i]!=0){
                if(i-v[i]+1<=0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}