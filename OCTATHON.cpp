//Problem name: OCTATHON
//https://www.codechef.com/START103D/problems/OCTATHON?tab=statement

#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    cin >> X;

    if(X<3){
        cout << "GOLD" << endl;
    }else if(X>=3 && X<6){
        cout << "SILVER" << endl;
    }else if(X>=6){
        cout << "BRONZE" << endl;
    }

    return 0;
}