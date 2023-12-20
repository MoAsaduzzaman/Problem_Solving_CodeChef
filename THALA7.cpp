// Problem name: THALA7 
// https://www.codechef.com/problems/THALA7

#include<bits/stdc++.h>
using namespace std;

string asad(int N){
    string s;
    
    if(N==7){
        s="THALA";
    }else{
        s="SADGE";
    }

    return s;
}

int main(){
    int N;
    cin >> N;
    cout << asad(N) << endl;
    return 0;
}