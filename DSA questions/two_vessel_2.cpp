#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int diff = abs(a - b);
        int moves = (diff + 2 * c - 1) / (2 * c);
        cout << moves << endl;
    }
    return 0;
}