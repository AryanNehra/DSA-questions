#include<iostream>
#include<vector>
#define ll long long
 
using namespace std;

vector<bool> dp;

bool f(ll n){
    if(n==0){
        return true;
    }
    if(n<0){
        return false;
    }
    if(dp[n]!=false){
        return dp[n];
    }
    bool a=f(n-2020);
    bool b=f(n-2021);

    return dp[n]=a||b;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        dp.clear();
        dp.resize(n+1,false);
        
        if(n<2020){
            cout<<"no"<<endl;
            continue;
        }
        if(f(n)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}