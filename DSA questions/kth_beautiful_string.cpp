#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s(n,'a');
        for(int i=n-2;i>=0;i--){
            if(k<=n-i-1){
                s[i]='b';
                s[n-k]='b';
                break;
            }
            k-=n-i-1;
        }
        cout<<s<<endl;
    }
    return 0;
}