#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

int binary_search_for_upper_bound(vector<ll> &a,int num,int r,int start){
    ll lo=start;
    ll hi=a.size();
    while(lo<hi){
        ll mid=lo+(hi-lo)/2;
        if(num+a[mid]>r){
            hi=mid;
        }else{
            lo=mid+1;
        }
    }
    return lo;
}

int binary_search_for_lower_bound(vector<ll> &a,int num,int l,int start){
    ll lo=start;
    ll hi=a.size();
    while(lo<hi){
        ll mid=lo+(hi-lo)/2;
        if(num+a[mid]<l){
            lo=mid+1;;
        }else{
            hi=mid;
        }
    }
    return lo;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        ll ans=0;

        for(int i=0;i<n;i++){
            int lower_bound=binary_search_for_lower_bound(a,a[i],l,i+1);
            int upper_bound=binary_search_for_upper_bound(a,a[i],r,i+1);
            ans+=(upper_bound-lower_bound);
        }
        cout<<ans<<endl;
    }
    return 0;
}