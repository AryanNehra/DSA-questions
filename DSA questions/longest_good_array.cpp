#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;

        vector<int> ans;
        int i=l;
        int diff=1;
        while(i<=r){
            ans.push_back(i);
            i+=diff;
            diff++;
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}