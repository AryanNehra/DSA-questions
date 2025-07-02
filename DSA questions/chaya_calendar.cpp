#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
         long long year = 1; 

        for (int i = 0; i < n; ++i) {
            if (year % v[i] != 0) {
                year = ((year / v[i]) + 1) * v[i];
            }
            year++;
        }
        cout << year - 1 << endl;
    }
    return 0;
}