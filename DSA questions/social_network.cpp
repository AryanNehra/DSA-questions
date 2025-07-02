#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    queue<int> q;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(!s.count(v[i])){
            if(q.size()==k){
                s.erase(q.front());
                q.pop();
            }
            q.push(v[i]);
            s.insert(v[i]);
        }
    }
    vector<int> temp;
    cout<<q.size()<<endl;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        temp.push_back(ele);
    }
    // reverse(temp.begin(),temp.end());
    for(int i=temp.size()-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}