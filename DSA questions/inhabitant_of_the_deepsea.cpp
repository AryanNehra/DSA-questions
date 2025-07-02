#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        deque<long long> dq(n);
        for(int i=0;i<n;i++) cin>>dq[i];

        while(dq.size()>1 && k){
            long long mn=min(dq.front(),dq.back());
            if(k<2*mn){
                dq.front()-=k/2+k%2;
                dq.back()-=k/2;
                k=0;
            }else{
                dq.front()-=mn;
                dq.back()-=mn;
                k-=2*mn;
            }
            if(dq.front()==0){
                dq.pop_front();
            }
            if(dq.back()==0){
                dq.pop_back();
            }
        }
        int ans=n-dq.size();
        cout<<ans+(dq.size() && dq.front()<=k)<<endl;
    }
    return 0;
}