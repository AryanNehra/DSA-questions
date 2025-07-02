#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(x+y>a+b+c){
            cout<<"no"<<endl;
            continue;
        }
        if(x>a+c){
            cout<<"no"<<endl;
            continue;
        }
        if(y>b+c){
            cout<<"no"<<endl;
            continue;
        }
        cout<<"yes"<<endl;
    }
    return 0;
}