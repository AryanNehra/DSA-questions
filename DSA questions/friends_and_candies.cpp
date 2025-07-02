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

        int sum=0;
        for(auto ele:a){
            sum+=ele;
        }
        if(sum%n!=0){
            cout<<-1<<endl;
            continue;
        }
        int k=0;
        int val=sum/n;
        for(int i=0;i<n;i++){
            if(a[i]>val){
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}