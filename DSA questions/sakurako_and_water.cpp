#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int k=0;
            int l=i;
            int mini=a[k][l];
            while(k<n && l<n){
                mini=min(mini,a[k][l]);
                k++;
                l++;
            }
            if(mini>=0){
                continue;
            }else{
                ans+=(-1)*mini;
            }
        }
        for(int i=1;i<n;i++){
            int k=i;
            int l=0;
            int mini=a[k][l];
            while(k<n && l<n){
                mini=min(mini,a[k][l]);
                k++;
                l++;
            }
            if(mini>=0){
                continue;
            }else{
                ans+=(-1)*mini;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}