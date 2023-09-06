//problem name: FLOW001
//https://www.codechef.com/problems/FLOW001

#include<iostream>
using namespace std;
int main(){
    int T,A,B,i,sum;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B;
        sum=A+B;
        cout << sum << endl;
    }

    return 0;
}