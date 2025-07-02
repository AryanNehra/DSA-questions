#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        if(n<3){
            cout<<-1<<endl;
            continue;
        }

        long long sum=0;
        sort(a.begin(),a.end());
        for(auto ele:a){
            sum+=ele;
        }
        cout<<max(0LL,a[n/2]*2*n-sum+1)<<endl;
    }
    return 0;
}