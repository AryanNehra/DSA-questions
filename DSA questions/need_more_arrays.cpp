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

        vector<int> temp;
        temp.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]==temp.back()+1 || a[i]==temp.back()){
                continue;
            }
            temp.push_back(a[i]);
        }
        cout<<temp.size()<<endl;
    }
    return 0;
}