#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a;
        char b; 
        cin>>a>>b;
        int s=a.size();
        bool flag=false;
        for(int i=0;i<s;i++){
            if(a[i]==b){
                int left=i;
                int right=s-i-1;
                if(left%2==0 && right%2==0){
                    flag=true;
                    break;
                }
            }
        }
        cout<<(flag ? "yes":"no")<<endl;
    }
    return 0;
}