#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> ind(m);
        for(int i=0;i<m;i++) cin>>ind[i];
        string c;
        cin>>c;

        set<int> set;
        for(int i=0;i<m;i++){
            set.insert(ind[i]-1);
        }
        sort(c.begin(),c.end());
        int i=0;
        for(auto ele:set){
            s[ele]=c[i++];
        }
        cout<<s<<endl;
    }
    return 0;
}