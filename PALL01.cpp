//Problem name: PALL01
//https://www.codechef.com/problems/PALL01

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        int sum = 0;
        int temp = N;

        while(N>0){
            sum = (sum*10) + (N%10);
            N=N/10;
        }

        if(temp==sum){
            cout << "wins" << endl;
        }else{
            cout << "loses" << endl;
        }
    }

    return 0;
}