#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,s;
        cin>>a>>s;

        string b="";
        string num1=to_string(a);
        string res=to_string(s);
        int i=num1.size()-1;
        int j=res.size()-1;
        bool flag=true;
        while(i>=0){
            if(j<0){
                flag=false;
                break;
            }
            int x=num1[i]-'0';
            int y=res[j]-'0';

            if(x>y){
                if(j==0){
                    flag=false;
                    break;
                }
                j--;
                y=(res[j]-'0')*10+(res[j+1]-'0');
                if(y<x || y-x>9){
                    flag=false;
                    break;
                }
                b=to_string(y-x)+b;
                j--;
            }else{
                b=to_string(y-x)+b;
                j--;
            }
            i--;
        }
        while(j>=0){
            b=res[j]+b;
            j--;
        }
        int k=0;
        while(k<b.size() && b[k]=='0'){
            k++;
        }
        b=b.substr(k);
        if(!flag || b.empty()){
            cout<<-1<<endl;
        }else{
            cout<<b<<endl;
        }
    }
    return 0;
}