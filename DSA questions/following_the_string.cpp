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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> cnt(26);
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(cnt[j]==a[i]){
                    cnt[j]+=1;
                    ans+=char(97+j);
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}