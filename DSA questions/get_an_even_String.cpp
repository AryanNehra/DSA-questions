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

        int n=s.size();
        int m=0;
        vector<bool> prev(26,false);
        for(auto ele:s){
            if(prev[ele-'a']){
                m+=2;
                for(int i=0;i<26;i++){
                    prev[i]=false;
                }
            }else{
                prev[ele-'a']=true;
            }
        }
        cout<<n-m<<endl;
    }
    return 0;
}