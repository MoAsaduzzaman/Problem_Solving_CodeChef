//Problem name: DICEGAME2
//https://www.codechef.com/problems/DICEGAME2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        vector <int> A(3);
        vector <int> B(3);

        for(int i=0; i<3; i++){
            cin >> A[i];
        }

        for(int i=0; i<3; i++){
            cin >> B[i];
        }

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        int Alice_Sum = A[1]+A[2];
        int Bob_Sum = B[1]+B[2];

        if(Alice_Sum>Bob_Sum){
            cout << "Alice" << endl;
        }else if(Alice_Sum<Bob_Sum){
            cout << "Bob" << endl;
        }else if(Alice_Sum==Bob_Sum){
            cout << "Tie" << endl;
        }
    }

    return 0;
}