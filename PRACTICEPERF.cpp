//Problem name: PRACTICEPERF
//https://www.codechef.com/problems/PRACTICEPERF

#include<iostream>
using namespace std;
int main(){

    int P[5],i,cnt=0;

    for(i=0; i<4; i++){
        cin >> P[i];
        if(P[i]>=10){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}