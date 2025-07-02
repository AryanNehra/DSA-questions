#include<iostream>
#include<vector>
#include<string>

using namespace std;

char max_char(vector<char> g){
    char max=g[0];
    for(int i=1;i<g.size();i++){
        if(g[i]>max){
            max=g[i];
        }
    }
    return max;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> m(n);
        for(int i=0;i<n;i++){
            cin>>m[i];
        }

        int ans=0;

        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                vector<char> group={m[i][j],m[j][n-i-1],m[n-i-1][n-j-1],m[n-j-1][i]};
                char c=max_char(group);
                for(auto ele:group){
                    ans+=c-ele;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}