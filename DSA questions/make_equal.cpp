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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum%n!=0){
            cout<<"no"<<endl;
            continue;
        }
        int num=sum/n;
        int val=0;
        for(int i=0;i<n;i++){
            if(a[i]==num){
                continue;
            }else if(a[i]>num){
                val+=a[i]-num;
            }else{
                val-=num-a[i];
                if(val<0){
                    break;
                }
            }
        }
        if(val==0){
            cout<<"yes"<<endl;
        }else if(val<0){
            cout<<"no"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}