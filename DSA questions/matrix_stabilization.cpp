#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }

        vector<pair<int,int>> temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int max=v[i][j];
                if(i-1>=0){
                    if(v[i-1][j]>max){
                        max=v[i-1][j];
                    }
                }
                if(i+1<n){
                    if(v[i+1][j]>max){
                        max=v[i+1][j];
                    }
                }
                if(j-1>=0){
                    if(v[i][j-1]>max){
                        max=v[i][j-1];
                    }
                }
                if(j+1<m){
                    if(v[i][j+1]>max){
                        max=v[i][j+1];
                    }
                }
                if(max==v[i][j]){
                    temp.push_back({i,j});
                }
            }
        }
        for(auto ele:temp){
            int max=0;
            if(ele.first-1>=0){
                if(v[ele.first-1][ele.second]>max){
                    max=v[ele.first-1][ele.second];
                }
            }
            if(ele.first+1<n){
                if(v[ele.first+1][ele.second]>max){
                    max=v[ele.first+1][ele.second];
                }
            }
            if(ele.second-1>=0){
                if(v[ele.first][ele.second-1]>max){
                    max=v[ele.first][ele.second-1];
                }
            }
            if(ele.second+1<m){
                if(v[ele.first][ele.second+1]>max){
                    max=v[ele.first][ele.second+1];
                }
            }
            while(v[ele.first][ele.second]>max){
                v[ele.first][ele.second]=max;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}