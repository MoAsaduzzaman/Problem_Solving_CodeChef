//Problem name: BESTOFTENNIS 
//https://www.codechef.com/START109D/problems/BESTOFTENNIS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;

        int maxval = max(X,Y);
        int minval = min(X,Y);
        int sum = X+Y;

        cout << sum+(maxval-minval-1) << endl;
    }
    return 0;
}