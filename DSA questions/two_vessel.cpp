#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(0));
    int m=n;
    int i=0;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);
        i++;
    }
    for(int k=0;k<n;k++){
        int a=v[k][0];
        int b=v[k][1];
        int c=v[k][2];
        int count=0;
        while(a!=b){
            if(a>b){
                a-=c;
                b+=c;
            }else{
                a+=c;
                b-=c;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}