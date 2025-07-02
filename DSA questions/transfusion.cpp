#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long odd_sum=0;
        long long even_sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even_sum+=v[i];
            }else{
                odd_sum+=v[i];
            }
        }
        long long odd_places=n/2;
        long long even_places=(n+1)/2;

        if(odd_sum%odd_places==0 && even_sum%even_places==0 && odd_sum/odd_places==even_sum/even_places){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}