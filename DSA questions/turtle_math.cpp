#include<iostream>
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

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]%3==1){
                flag=true;
                break;
            }
        }
        if(sum%3==0){
            cout<<0<<endl;
            continue;
        }else if(sum%3==2){
            cout<<1<<endl;
            continue;
        }else{
            if(flag){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
            continue;
        }
    }
    return 0;
}