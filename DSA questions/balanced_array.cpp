#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> ans(n);
        if(n==2){
            cout<<"no"<<endl;
            continue;
        }
        ans[0]=2;
        int even_sum=2;
        for(int i=1;i<n/2;i++){
            ans[i]=ans[i-1]+2;
            even_sum+=ans[i];
        }
        ans[n/2]=1;
        int odd_sum=1;
        for(int i=n/2+1;i<n-1;i++){
            ans[i]=ans[i-1]+2;
            odd_sum+=ans[i];
        }
        bool flag=true;
        if((even_sum-odd_sum)%2!=0){
            ans[n-1]=even_sum-odd_sum;
        }else{
            flag=false;
        }
        if(flag){
            cout<<"yes"<<endl;
            for(auto ele:ans){
                cout<<ele<<" ";
            }
            cout<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}