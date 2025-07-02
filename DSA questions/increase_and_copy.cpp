#include<iostream>
#include<math.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int nroot=floor(sqrt(n));

        if(nroot*nroot>=n){
            cout<<2*nroot-2<<endl;
        }else if((nroot+1)*nroot>=n){
            cout<<2*nroot-1<<endl;
        }else{
            cout<<2*nroot<<endl;
        }
    }
    return 0;
}