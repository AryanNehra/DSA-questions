#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<vector<int>>> v;
        for(int k=0;k<n;k++){
            vector<vector<int>> a(2,vector<int>(2,0));
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cin>>a[i][j];
                }
            }
            v.push_back(a);
        }
        if(m%2!=0){
            cout<<"no"<<endl;
            continue;
        }
        bool flag=false;
        for(auto ele:v){
            if(ele[0][1]==ele[1][0]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}