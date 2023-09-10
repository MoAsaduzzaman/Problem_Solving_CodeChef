//Problem name: SONGS
//https://www.codechef.com/problems/SONGS

#include<iostream>
using namespace std;
int main(){

    int T,N,X;

    cin >> T;

    while(T--){

        cin >> N >> X;

        cout << (N/(X*3)) << endl;
        
    }

    return 0;
}
