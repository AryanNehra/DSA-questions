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

        long long prod=1;
        for(int i=0;i<n;i++){
            prod*=v[i];
        }

        vector<int> ans;
        int i=0;
        int j=n-1;
        ans.push_back(prod%m);
        for(int k=0;k<n-1;k++){
            if(s[k]=='L'){
                prod/=v[i++];
                ans.push_back(prod%m);
            }else{
                prod/=v[j--];
                ans.push_back(prod%m);
            }
        }
        for(int l=0;l<ans.size();l++){
            cout<<ans[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}