//Problem name: WINNERR
//https://www.codechef.com/problems/WINNERR

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,PA,PB,QA,QB;
    int max1,max2;
    cin >> T;
    while(T--){
        cin >> PA >> PB >> QA >> QB;
        if(PA>=PB){
            max1 = PA;
        }else{
            max1 = PB;
        }

        if(QA>=QB){
            max2 = QA;
        }else{
            max2 = QB;
        }

        if(max1<max2){
            cout << "P" << endl;
        }
        if(max1>max2){
            cout << "Q" << endl;
        }
        if(max1==max2){
            cout << "TIE" << endl;
        }
    }

    return 0;
}