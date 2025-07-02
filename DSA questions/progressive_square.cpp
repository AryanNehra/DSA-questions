#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> b(n*n);
        for(int i=0;i<n*n;i++) cin>>b[i];

        sort(b.begin(),b.end());
        int first_ele=b[0];
        vector<int> temp(n*n,0);
        temp[0]=first_ele;
        int index = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
            temp[index++] = first_ele + row * c + col * d;
            }
        }
        sort(temp.begin(),temp.end());
        bool flag=false;
        for(int i=0;i<n*n;i++){
            if(b[i]!=temp[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}