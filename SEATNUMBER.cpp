//Problem name: SEATNUMBER
//https://www.codechef.com/problems/SEATNUMBER

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        if(N==1||N==2||N==3||N==4||N==5||N==6||N==7||N==8||N==9||N==10){
            cout << "Lower Double" << endl;
        }
        if(N==16||N==17||N==18||N==19||N==20||N==21||N==22||N==23||N==24||N==25){
            cout << "Upper Double" << endl;
        }
        if(N==11||N==12||N==13||N==14||N==15){
            cout << "Lower Single" << endl;
        }
        if(N==26||N==27||N==28||N==29||N==30){
            cout << "Upper Single" << endl;
        }
    }

    return 0;
}