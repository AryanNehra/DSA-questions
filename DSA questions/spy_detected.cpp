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
        int ans=0;
        if(v[0]!=v[1] && v[1]==v[2]){
            ans=1;
        }else if(v[n-1]!=v[n-2] && v[n-2]==v[n-3]){
            ans=n;
        }else{
            for(int i=1;i<n-1;i++){
                if(v[i]!=v[i-1] && v[i]!=v[i+1]){
                    ans=i+1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}