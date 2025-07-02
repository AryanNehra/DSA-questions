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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }

        vector<int> temp;
        while(a.size()!=1){
            sort(a.begin(),a.end());
            int num=a[0];
            temp.push_back(num);
            a.erase(a.begin());
            for(auto& ele:a){
                ele=ele-num;
            }
        }
        temp.push_back(a[0]);
        sort(temp.begin(),temp.end());
        cout<<temp.back()<<endl;
    }
    return 0;
}