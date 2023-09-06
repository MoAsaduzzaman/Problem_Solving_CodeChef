//Problem name: LUCKYSEVEN
//https://www.codechef.com/SEP23D/problems/LUCKYSEVEN

#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char ch[11],i,cnt=0;

    cin >> ch;

    for(i=0; i<11; i++){
        cnt++;
        if(cnt==7){
            cout << ch[i] << endl;
        }
    }

    return 0;
}