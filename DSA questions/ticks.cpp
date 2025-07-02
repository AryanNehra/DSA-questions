#include<iostream>
#include<vector>
 
using namespace std;

void iterate(int i,int j,vector<vector<char>> &given,vector<pair<int,int>> &mark){
    int left=j;
    int right=j;
    int down=i;
    while(down>=0 && left>=0 && right<given[0].size() && given[down][left]=='*' && given[down][right]=='*'){
        mark.push_back({down,left});
        mark.push_back({down,right});
        left--;
        right++;
        down--;
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<vector<char>> given(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>given[i][j];
            }
        }

        vector<vector<char>> obtained(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(given[i][j]!='*'){
                    continue;
                }
                vector<pair<int,int>> mark;
                iterate(i,j,given,mark);
                if(mark.size()>=2*k+2){
                    for(auto ele:mark){
                        obtained[ele.first][ele.second]='*';
                    }
                }
            }
        }
        cout<<((given==obtained) ? "yes" : "no")<<endl;
    }
    return 0;
}