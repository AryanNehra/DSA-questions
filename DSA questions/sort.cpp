#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a;
        cin>>b;
        vector<pair<int,int>> v(q);
        for(int i=0;i<q;i++){
            cin>>v[i].first>>v[i].second;
        }

        vector<vector<int>> prefixA(26, vector<int>(n+1, 0));
        vector<vector<int>> prefixB(26, vector<int>(n+1, 0));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                prefixA[j][i+1] = prefixA[j][i];
                prefixB[j][i+1] = prefixB[j][i];
            }
            prefixA[a[i]-'a'][i+1]++;
            prefixB[b[i]-'a'][i+1]++;
        }
        vector<int> ans;
        for(auto ele:v){
            int count=0;
            for(int i=0;i<26;i++){
                int count1 = prefixA[i][ele.second] - prefixA[i][ele.first-1];
                int count2 = prefixB[i][ele.second] - prefixB[i][ele.first-1];
                if(count1>count2){
                    count+=(count1-count2);
                }
            }
            ans.push_back(count);
        }
        for(auto ele:ans){
            cout<<ele<<endl;
        }
    }
    return 0;
}