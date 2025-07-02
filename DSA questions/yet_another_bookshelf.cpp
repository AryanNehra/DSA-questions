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

        int ans=0;
        int left_idx=0;
        int right_idx=n-1;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                left_idx=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==1){
                right_idx=i;
                break;
            }
        }
        for(int i=left_idx;i<=right_idx;i++){
            if(a[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}