#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int cost=abs((s[0]-'a')-(s[n-1]-'a'));
        vector<int> ans;
        ans.push_back(1);
        vector<pair<char,int>> temp;
        for(int i=1;i<n-1;i++){
            temp.push_back({s[i],i});
        }
        if(s[0]<=s[n-1]){
            sort(temp.begin(),temp.end());
        }else{
            sort(temp.rbegin(),temp.rend());
        }
        for(int i=0;i<n-2;i++){
            if((temp[i].first>=s[0] && temp[i].first<=s[n-1]) || (temp[i].first<=s[0] && temp[i].first>=s[n-1])){
                ans.push_back(temp[i].second+1);
            }
        }
        ans.push_back(n);
        cout<<cost<<" "<<ans.size()<<endl;
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}