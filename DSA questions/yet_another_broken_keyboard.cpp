#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='b'){
        //         s[i]='*';
        //         if(i>0){
        //             int j=i-1;
        //             while(j>=0){
        //                 if(s[j]>='a' && s[j]<='z'){
        //                     s[j]='*';
        //                     break;
        //                 }
        //                 j--;
        //             }
        //         }
        //     }else if(s[i]=='B'){
        //         s[i]='*';
        //         if(i>0){
        //             int j=i-1;
        //             while(j>=0){
        //                 if(s[j]>='A' && s[j]<='Z'){
        //                     s[j]='*';
        //                     break;
        //                 }
        //                 j--;
        //             }
        //         }
        //     }else{
        //         continue;
        //     }
        // }
        // string ans="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='*'){
        //         continue;
        //     }
        //     ans+=s[i];
        // }
        // cout<<ans<<endl;

        vector<char> stk;

        vector<int> lowercase_indices;
        vector<int> uppercase_indices;

        for (char c : s) {
            if (c == 'b') {
                while (!lowercase_indices.empty()) {
                    int idx = lowercase_indices.back();
                    if (stk[idx] != '#') {
                        stk[idx] = '#';
                        lowercase_indices.pop_back();
                        break;
                    } else {
                        lowercase_indices.pop_back();
                    }
                }
            } else if (c == 'B') {
                while (!uppercase_indices.empty()) {
                    int idx = uppercase_indices.back();
                    if (stk[idx] != '#') {
                        stk[idx] = '#';
                        uppercase_indices.pop_back();
                        break;
                    } else {
                        uppercase_indices.pop_back();
                    }
                }
            } else {
                stk.push_back(c);
                if (islower(c)) lowercase_indices.push_back(stk.size() - 1);
                else if (isupper(c)) uppercase_indices.push_back(stk.size() - 1);
            }
        }

        for (char c : stk) {
            if (c != '#') cout << c;
        }
        cout <<endl;
    }
    return 0;
}