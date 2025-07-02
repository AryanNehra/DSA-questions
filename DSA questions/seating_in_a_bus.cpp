#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
            a[i]--;
        }
        vector<bool> occ(n,false);
        occ[a[0]]=true;
        bool flag=true;
        for(int i=1;i<n;i++){
            bool has_neighbour=true;
            if(a[i]==0){
                if(occ[1]==false){
                    has_neighbour=false;
                }
            }
            if(a[i]==n-1){
                if(occ[n-2]==false){
                    has_neighbour=false;
                }
            }
            if(a[i]-1>=0 && a[i]+1<n && occ[a[i]-1]==false && occ[a[i]+1]==false){
                has_neighbour=false;
            }
            if(!has_neighbour){
                flag=false;
                break;
            }
            occ[a[i]]=true;
        }
        if(flag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}