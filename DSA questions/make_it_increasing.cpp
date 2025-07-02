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

        bool flag=true;
        int count=0;
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1] && a[i]>0){
                a[i]/=2;
                count++;
            }
            if(a[i]==0 && i>0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<count;
        }else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}