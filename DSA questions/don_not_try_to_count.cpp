#include<iostream>
#include<string>

using namespace std;

bool contains_substr(string s, string x) {
    return x.find(s) != string::npos;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;

        int ans=0;
        string temp=x;
        bool flag=false;
        for(int i=0;i<=10;i++){
            if(contains_substr(s,temp)){
                flag=true;
                break;
            }
            temp+=temp;
            ans++;
        }
        if(flag){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}