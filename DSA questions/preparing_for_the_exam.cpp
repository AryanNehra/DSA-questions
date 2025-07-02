#include<iostream>
#include<vector>
#include<set>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(m);
        vector<int> q(k);
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<k;i++) cin>>q[i];

        string ans="";
        set<int> s;
        for(int i=0;i<k;i++){
            s.insert(q[i]);
        }
        for(int i=0;i<m;i++){
            bool flag=false;
            if((!s.count(a[i]) && s.size()>=n-1) || s.size()==n){
                flag=true;
            }
            if(flag){
                ans+='1';
            }else{
                ans+='0';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}