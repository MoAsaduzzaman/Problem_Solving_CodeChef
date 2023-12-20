// Problem name: MAKENZERO 
// https://www.codechef.com/problems/MAKENZERO

#include<bits/stdc++.h>
using namespace std;

string asad(int N){
    string s;

    if(N%3==0 || N%4==0){
        s = "YES";
    }else{
         bool possible = false;
        for (int i = 1; i <= N / 3; ++i) {
            if ((N - 3 * i) % 4 == 0) {
                possible = true;
                break;
            }
        }

        if(possible) s = "YES";
        else s = "NO";
    }

    return s;
}

int main(){
    int T;
    cin >> T;
    while(T){
        int N;
        cin >> N;
        cout << asad(N) << endl;
        T--;
    }
    return 0;
}
