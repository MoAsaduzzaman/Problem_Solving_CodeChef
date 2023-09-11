//Problem name: CRICMATCH
//https://www.codechef.com/problems/CRICMATCH

#include<iostream>
using namespace std;
int main(){
    
    int T,N,M;

    cin >> T;

    while (T--){

        cin >> N >> M;

        if(M*6*6>=N){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    
    return 0;
}