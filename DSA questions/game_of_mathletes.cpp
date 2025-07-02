#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> x(n);
        for(int i=0;i<n;i++) cin>>x[i];

        sort(x.begin(),x.end());
        int ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(x[i]+x[j]==k){
                ans++;
                i++;
                j--;
            }else if(x[i]+x[j]>k){
                j--;
            }else{
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}