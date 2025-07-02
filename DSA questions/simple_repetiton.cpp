#include<iostream>
#include<string>
#include<math.h>
 
using namespace std;

bool prime(long long x){
    if(x<=1) return false;
    if(x==2) return true;
    bool flag=true;
    for(long long i=2;i<=sqrt(x);i++){
        if(x%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,k;
        cin>>x>>k;

        if (k > 1 && x > 1) {
            cout << "NO";
        } else if (k == 1) {
            cout << (prime(x) ? "YES" : "NO");
        } else {
            cout << ((k == 2) ? "YES" : "NO");
        }
        cout<<endl;
    }
    return 0;
}