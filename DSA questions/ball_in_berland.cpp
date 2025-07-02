#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        vector<int> boys(k);
        vector<int> girls(k);
        for(int i=0;i<k;i++) cin>>boys[i];
        for(int i=0;i<k;i++) cin>>girls[i];

        vector<int> B(a+1);
        vector<int> G(b+1);
        for(int i=0;i<k;i++){
            B[boys[i]]++;
            G[girls[i]]++;
        }
        long long ans=0;
        for(int i=0;i<k;i++){
            ans+=((k-1)-(B[boys[i]]-1)-(G[girls[i]]-1));
        }
        cout<<ans/2<<endl;
    }
    return 0;
}