//Problem name: MAZDIFFMIN
//https://www.codechef.com/problems/MAXDIFFMIN

#include<iostream>
using namespace std;
int main(){
    int T,A,B,C,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B >> C;
        cout << C-A << endl;
    }

    return 0;
}