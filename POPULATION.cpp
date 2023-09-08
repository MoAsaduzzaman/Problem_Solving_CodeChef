//Problem name: POPULATION
//https://www.codechef.com/problems/POPULATION

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,Z,i,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y >> Z;
        ans = (X-Y) + Z;
        cout << ans << endl;
    }

    return 0;
}