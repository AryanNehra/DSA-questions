#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n-1);
        for(int i=0;i<n-1;i++) cin>>b[i];

        if(n==2){
            cout<<b[0]<<" "<<b[0]<<endl;
            continue;
        }

        vector<int> a(n);
        a[0]=b[0];
        for(int i=0;i<n-1;i++){
            if(i<n-2){
                a[i+1]=min(b[i],b[i+1]);
            }else{
                a[i+1]=b[i];
            }
        }
        for(auto ele:a){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}