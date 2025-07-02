#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,x,y;
        cin>>n>>a>>b>>x>>y;
        
        int min1=min(min(a-1,n-a),min(b-1,n-b));
        int min2=min(min(x-1,n-x),min(y-1,n-y));

        cout<<abs(min1-min2)<<endl;
    }
    return 0;
}