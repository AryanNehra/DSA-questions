#include<iostream>
#include<climits>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        int count2=0;
        int count3=0;
        long long temp=n;
        while(temp%2==0){
            temp/=2;
            count2++;
        }
        while(temp%3==0){
            temp/=3;
            count3++;
        }
        if(temp!=1){
            cout<<-1<<endl;
            continue;
        }
        if(count2>count3){
            cout<<-1<<endl;
            continue;
        }
        cout<<(count3-count2)+count3<<endl;
    }
    return 0;
}