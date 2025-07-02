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

        int odd_freq=0;
        int even_freq=0;
        vector<int> of;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                odd_freq++;
                of.push_back(i);
            }
        }
        if(odd_freq%2==0){
            cout<<"yes"<<endl;
            continue;
        }
        bool flag=false;
        for(int i=0;i<of.size();i++){
            for(int j=0;j<n;j++){
                if(a[of[i]]==a[j]+1 || a[of[i]]==a[j]-1){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}