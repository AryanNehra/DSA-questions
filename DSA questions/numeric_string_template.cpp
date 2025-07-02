#include<iostream>
#include<map>
#include<vector>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int m;
        cin>>m;
        vector<string> s(m);
        for(int i=0;i<m;i++) cin>>s[i];

        
        vector<bool> ans;
        for(auto ele:s){
            bool flag=true;
            map<char,int> mp1;
            map<int,char> mp2;
            if(ele.size()!=n){
                ans.push_back(false);
                continue;
            }
            for(int i=0;i<n;i++){
                if(mp1.find(ele[i])!=mp1.end()){
                    if(mp1[ele[i]]==a[i]){
                        continue;
                    }else{
                        flag=false;
                        break;
                    }
                }else{
                    mp1[ele[i]]=a[i];
                }
                if(mp2.find(a[i])!=mp2.end()){
                    if(mp2[a[i]]==ele[i]){
                        continue;
                    }else{
                        flag=false;
                        break;
                    }
                }else{
                    mp2[a[i]]=ele[i];
                }
            }
            ans.push_back(flag);
        }
        for(auto ele:ans){
            if(ele){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}