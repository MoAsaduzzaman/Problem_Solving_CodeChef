//Problem name: SEMCOURSES
//https://www.codechef.com/problems/SEMCOURSES

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,Z,i,ans;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y >> Z;
        ans = X*Y*Z;
        cout << ans << endl;
    }

    return 0;
}