#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;

        long i=0;
        long j=0;
        long k=0;
        while(i<n){
            char ch=a[i];
            while(j<m && b[j]!=ch){
                j++;
            }
            if(j==m){
                break;
            }else{
                k++;
                j++;
            }
            i++;
        }
        
        cout<<k<<endl;
    }
    return 0;
}