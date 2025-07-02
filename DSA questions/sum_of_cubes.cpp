#include<iostream>
#include<unordered_set>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        unordered_set<long long> s;
        for(long long i=1;i*i*i<=n;i++){
            s.insert(i*i*i);
        }
        bool flag=false;
        for(long long i=1;i*i*i<=n;i++){
            if(s.count(n-i*i*i)){
                flag=true;
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