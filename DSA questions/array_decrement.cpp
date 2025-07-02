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
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int val=0;
        bool flag=true;
        for(int i = 0; i < n; i++) {
            if(b[i] > a[i]) {
                flag = false;
                break;
            }
            val = max(val, a[i] - b[i]);
        }

        if(!flag) {
            cout << "no" << endl;
            continue;
        }

        for(int i = 0; i < n; i++) {
            int expected = max(a[i] - val, 0);
            if(expected != b[i]) {
                flag = false;
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