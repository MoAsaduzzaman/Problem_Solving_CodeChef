//Problem name: PRIMEDICE
//https://www.codechef.com/problems/PRIMEDICE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B;
    cin >> T;
    while(T--){
        int sum,cnt=0;
        cin >> A >> B;
        sum = A+B;
        for(int i=2; i*i<=sum; i++){
            if(sum%i==0){
                cnt++;
            }
        }
        if(cnt==0){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }

    return 0;
}