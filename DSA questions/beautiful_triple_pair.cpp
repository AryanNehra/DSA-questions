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

        long long ans=0;
        vector<vector<int>> temp;
        for(int i=2;i<n;i++){
            vector<int> temp1;
            temp1.push_back(v[i-2]);
            temp1.push_back(v[i-1]);
            temp1.push_back(v[i]);
            temp.push_back(temp1);
        }
        for(int i=0;i<temp.size();i++){
            for(int j=i+1;j<temp.size();j++){
                if(temp[i][0]!=temp[j][0] && temp[i][1]==temp[j][1] && temp[i][2]==temp[j][2]){
                    ans++;
                }else if(temp[i][0]==temp[j][0] && temp[i][1]!=temp[j][1] && temp[i][2]==temp[j][2]){
                    ans++;
                }else if(temp[i][0]==temp[j][0] && temp[i][1]==temp[j][1] && temp[i][2]!=temp[j][2]){
                    ans++;
                }else{
                    continue;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}