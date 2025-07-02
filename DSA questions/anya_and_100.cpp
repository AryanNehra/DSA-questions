#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<pair<int,char>> v(q);
        for(int i=0;i<q;i++){
            cin>>v[i].first>>v[i].second;
        }
        for(auto ele:v){
            s[ele.first-1]=char(ele.second);
            int res=s.find("1100");
            if(res!=string::npos){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}