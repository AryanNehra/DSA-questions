#include<iostream>
#include<math.h>
#include<set>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;

        set<int> s;
        for(int pow_a = 1; pow_a <= l; pow_a *= a){
            for(int pow_b = 1; pow_a * pow_b <= l; pow_b *= b){
                int prod = pow_a * pow_b;
                if(l % prod == 0){
                    int k = l / prod;
                    s.insert(k);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}