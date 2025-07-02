#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;

        vector<int> a(k);
        a[0]=1;
        int curr=1;
        int diff=1;
        for(int i=1;i<k;i++){
            int remaining_elements=k-i-1;
            if(curr+diff+remaining_elements<=n){
                curr+=diff;
                a[i]=curr;
                diff++;
            }else{
                curr+=1;
                a[i]=curr;
            }
        }
        for(auto ele:a){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}