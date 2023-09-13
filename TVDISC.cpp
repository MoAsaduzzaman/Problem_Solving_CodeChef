//Problem name: TVDISC
//https://www.codechef.com/problems/TVDISC

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,C,D;
    cin >> T;

    while(T--){
        cin >> A >> B >> C >> D;
        if((A-C)<(B-D)){
            cout << "First" << endl;
        }if((A-C)>(B-D)){
            cout << "Second" << endl;
        }
        if((A-C)==(B-D)){
            cout << "Any" << endl;
        }
    }

    return 0;
}
