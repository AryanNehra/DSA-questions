#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++) cin>>s[i];

        int ans=0;
        for(char ch='a';ch<='e';ch++){
            vector<int> temp;
            for(auto ele:s){
                int f1=0;
                int f2=0;
                for(int i=0;i<ele.size();i++){
                    if(ele[i]==ch){
                        f1++;
                    }else{
                        f2++;
                    }
                }
                temp.push_back(f1-f2);
            }
            int sum=0;
            sort(temp.begin(),temp.end(),greater<int>());
            int idx=0;
            for(int i=0;i<temp.size();i++){
                sum+=temp[i];
                if(sum<=0){
                    idx=i;
                    break;
                }
                idx=i+1;
            }
            ans=max(ans,idx);
        }
        cout<<ans<<endl;
    }
    return 0;
}