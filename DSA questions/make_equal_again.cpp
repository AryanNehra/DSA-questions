#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int ans=INT_MAX;
        int left=0;
        int leftcount=0;
        int right=n-1;
        int rightcount=0;
        while(left<n && a[left]==a[0]){
            left++;
            leftcount++;
        }
        while(right>=0 && a[right]==a[n-1]){
            right--;
            rightcount++;
        }
        if(a[0]==a[n-1]){
            cout<<max(0,n-(leftcount+rightcount))<<endl;
        }else{
            cout<<n-max(leftcount,rightcount)<<endl;
        }
        
    }
    return 0;
}