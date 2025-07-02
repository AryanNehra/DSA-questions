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

        int count0=3;
        int count1=1;
        int count2=2;
        int count5=1;
        int count3=1;

        int ans=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0--;
            }else if(a[i]==1){
                count1--;
            }else if(a[i]==2){
                count2--;
            }else if(a[i]==3){
                count3--;
            }else if(a[i]==5){
                count5--;
            }
            if(count0<=0 && count1<=0 && count2<=0 && count3<=0 && count5<=0){
                flag=true;
                ans=i+1;
                break;
            }
        }
        if(flag){
            cout<<ans<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}