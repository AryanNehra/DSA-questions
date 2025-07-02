#include<iostream>
#include<vector>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        pair<int,int> p1;
        pair<int,int> p2;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='*' && count==0){
                    p1={i,j};
                    count++;
                }
                if(a[i][j]=='*' && count!=0){
                    p2={i,j};
                }
            }
        }
        pair<int,int> p3;
        pair<int,int> p4;
        if(p1.first==p2.first){
            p3.first=(p1.first+1)%n;
            p3.second=p1.second;
            p4.first=(p2.first+1)%n;
            p4.second=p2.second;
        }else if(p1.second==p2.second){
            p3.second=(p1.second+1)%n;
            p3.first=p1.first;
            p4.second=(p2.second+1)%n;
            p4.first=p2.first;
        }else{
            p3.first=p1.first;
            p3.second=p2.second;
            p4.first=p2.first;
            p4.second=p1.second;
        }
        a[p3.first][p3.second]='*';
        a[p4.first][p4.second]='*';
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}