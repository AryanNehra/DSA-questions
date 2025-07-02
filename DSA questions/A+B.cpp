#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int b=a[0]-'0';
        int c=a[2]-'0';
        cout<<b+c<<endl;
    }
    return 0;
}