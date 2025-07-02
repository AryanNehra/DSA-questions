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

        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            while(a[i]>n){
                a[i]/=2;
            }
            freq[a[i]]++;
        }
        bool flag=true;
        for(int i=n;i>0;i--){
            if(freq[i]==0){
                flag=false;
                break;
            }
            freq[i/2]+=freq[i]-1;
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}