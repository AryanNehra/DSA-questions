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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int c0=0;
        int c1=0;
        int c2=0;

        for(int i=0;i<n;i++){
            if(v[i]%3==0){
                c0++;
            }else if(v[i]%3==1){
                c1++;
            }else{
                c2++;
            }
        }
        int ans=0;
        while(true){
            if(c0==c1 && c1==c2){
                break;
            }
            int maxi=max({c0,c1,c2});
            if(maxi==c0){
                c0--;
                c1++;
                ans++;
            }else if(maxi==c1){
                c1--;
                c2++;
                ans++;
            }else{
                c2--;
                c0++;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}