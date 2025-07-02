#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;

        vector<int> a(n);
        int maxi=s-r;
        a[0]=maxi;
        for(int i=1;i<n;i++){
            a[i]=min(maxi,r-(n-1-i));
            r-=a[i];
        }
        for(auto ele:a){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}