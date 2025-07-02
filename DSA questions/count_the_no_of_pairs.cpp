#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        unordered_map<char,int> ump;
        unordered_map<char,int> lmp;

        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                ump[s[i]]++;
            }else{
                lmp[s[i]]++;
            }
        }
        int ans=0;
        for(auto &ele:lmp){
            if(ump.find(toupper(ele.first))==ump.end()){
                continue;
            }
            int mini=min(ele.second,ump[toupper(ele.first)]);
            ans+=mini;
            ele.second-=mini;
            ump[toupper(ele.first)]-=mini;
        }
        for(auto &ele : lmp){
            int possible_pairs = ele.second / 2;
            int pairs_to_add = min(possible_pairs, k);
            ans += pairs_to_add;
            k -= pairs_to_add;
        }
        for(auto &ele : ump){
            int possible_pairs = ele.second / 2;
            int pairs_to_add = min(possible_pairs, k);
            ans += pairs_to_add;
            k -= pairs_to_add;
        }
        cout<<ans<<endl;
    }
    return 0;
}