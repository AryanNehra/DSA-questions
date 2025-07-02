#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;

        int idx=0;
        int i=0;
        int j=n-1;
        for(int a=0;a<n;a++){
            if(s[a]=='L'){
                i++;
            }
            if(s[a]=='R'){
                j--;
            }
            if(i==j){
                idx=i;
                break;
            }
            
        }
        int left=idx;
        int right=idx;
        vector<int> ans(n);
        long long prod=1;
        ans[n-1]=v[idx]%m;
        for(int k=n-2;k>=0;k--){
            if(s[k]=='L'){
                if((left-1)>=0){
                    left--;
                    ans[k]=(ans[k+1]*v[left])%m;
                }
                
            }else{
                if((right+1)<n){
                    right++;
                    ans[k]=(ans[k+1]*v[right])%m;
                }
            }
        }
        for(int l=0;l<n;l++){
            cout<<ans[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}