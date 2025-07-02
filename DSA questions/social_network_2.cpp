#include<iostream>
#include<deque>
#include<set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;

    deque<int> q;
    set<int> s;
    for(int i=0;i<n;i++){
        int id;
        cin>>id;
        if(!s.count(id)){
            if(q.size()==k){
                s.erase(q.back());
                q.pop_back();
            }
            q.push_front(id);
            s.insert(id);
        }
    }
    cout<<q.size()<<endl;
    for(auto ele:q){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}