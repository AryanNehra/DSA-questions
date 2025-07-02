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

        int j=n-1;
        while(j-1>=0 && a[j]<=a[j-1]){
            j--;
        }
        while(j-1>=0 && a[j]>=a[j-1]){
            j--;
        }
        cout<<j<<endl;
    }
    return 0;
}