#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

struct Point{
    int x;
    int y;
    Point()=default;
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<Point> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].x>>v[i].y;
        }

        string ans="YES";
        unordered_map<int,Point> mp;
        for(int i=0;i<n;i++){
            int sum=v[i].x+v[i].y;
            if(mp.find(sum)!=mp.end()){
                ans="NO";
                break;
            }else{
                mp[sum]=v[i];
            }
        }
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[i]=v[i].x+v[i].y;
        }
        sort(temp.begin(),temp.end());
        string path="";
        Point start=mp[temp[0]];
        int last_x;
        int last_y;
        int a1=start.x;
        int a2=start.y;
        while(a1--){
            path+="R";
        }
        while(a2--){
            path+="U";
        }
        last_x=start.x;
        last_y=start.y;
        for(int i=1;i<n;i++){
            Point node=mp[temp[i]];
            int no_of_R;
            int no_of_U;
            if(node.x==last_x){
                no_of_R=0;
            }else{
                no_of_R=node.x-last_x;
            }
            if(node.y==last_y){
                no_of_U=0;
            }else{
                no_of_U=node.y-last_y;
            }
            while(no_of_R--){
                path+="R";
            }
            while(no_of_U--){
                path+="U";
            }
            last_x=node.x;
            last_y=node.y;
        }
        if(ans=="YES"){
            cout<<ans<<endl;
            cout<<path<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}