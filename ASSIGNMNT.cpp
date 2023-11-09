//Problem name: ASSIGNMNT
//https://www.codechef.com/START107D/problems/ASSIGNMNT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,Z;
        cin >> X >> Y >> Z;

        int tl_min = X*Y;

        if((1440*Z)>=tl_min){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}