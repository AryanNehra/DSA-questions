#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }

        vector<pair<long long,long long>> temp(n);

        for(auto &ele:v){
            sort(ele.begin(),ele.end());
        }

        for(int i=0;i<n;i++){
            long long points=0;
            long long total_time=h;
            long long penalty=0;
            long long sum=0;
            for(int j=0;j<m;j++){
                total_time-=v[i][j];
                if(total_time<0) break;
                points++;
                penalty+=v[i][j]+sum;
                sum+=v[i][j];
            }
            temp[i]=make_pair(points,penalty);
        }
        int ans=1;
        for(int i=1;i<n;i++){
            if(temp[i].first>temp[0].first){
                ans++;
            }else if(temp[i].first==temp[0].first && temp[i].second<temp[0].second){
                ans++;
            }else{
                continue;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}