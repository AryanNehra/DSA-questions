#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;

        int ele1 = abs(a - 1);

        int ele2 = abs(b - c) + abs(c - 1);

        if(ele1 < ele2){
            cout << 1 << endl;
        } else if(ele2 < ele1){
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}
