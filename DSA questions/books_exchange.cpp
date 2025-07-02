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
        for(int i=0;i<n;i++) cin>>v[i];

        for(int i=0;i<n;i++) v[i]--;

        for(int i=0;i<n;i++){
            int count=0;
            int j=i;
            do{
                count++;
                j=v[j];
            }while(j!=i);
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}