#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=1;i<=n/2;i++){
            if(v[i-1]==v[i] || v[n-i-1]==v[n-i]){
                swap(v[i],v[n-i-1]);
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}