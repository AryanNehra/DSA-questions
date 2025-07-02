#include<iostream>
#include<vector>

using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,s;
        cin>>m>>s;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];

        vector<bool> used(100+1,false);
        int max=0;
        for(int i=0;i<m;i++){
            used[b[i]]=true;
            if(b[i]>max){
                max=b[i];
            }
        }
        bool flag=false;
        for(int i=max;i<=100;i++){
            int sum=i*(i+1)/2;
            int temp_m=0;
            for(int j=1;j<=i;j++){
                if(used[j]){
                    sum-=j;
                    temp_m++;
                }
            }
            if(sum==s && temp_m==m){
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