#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
            
        int da=min(n,a-x);
        int a1=a-da;
        int b1=max(b-(n-da),y);
        long long prod1=1LL*a1*b1;

        int db=min(n,b-y);
        int b2=b-db;
        int a2=max(a-(n-db),x);
        long long prod2=1LL*a2*b2;

        cout<<min(prod1,prod2)<<endl;
    }
    return 0;
}