//Problem name: BETDEAL
//https://www.codechef.com/problems/BETDEAL

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        int AA = 100 - ((100*A)/100);
        int BB = 200 - ((200*B)/100);

        if(AA<BB){
            cout << "FIRST" << endl;
        }
        if(AA>BB){
            cout << "SECOND" << endl;
        }
        if(AA==BB){
            cout << "BOTH" << endl;
        }
    }

    return 0;
}
