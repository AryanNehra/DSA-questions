#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++) cin>>s[i];

        sort(s.begin(),s.end());
        int ans=s[1]-s[0];
        for(int i=2;i<n;i++){
            if(s[i]-s[i-1]<ans){
                ans=s[i]-s[i-1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}