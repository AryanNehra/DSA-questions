#include<iostream>
#include<set>
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

        set<int> s;
        for(int i=n-1;i>=0;i--){
            if(!s.count(a[i])){
                s.insert(a[i]);
            }else{
                break;
            }
        }
        cout<<n-s.size()<<endl;
    }
    return 0;
}