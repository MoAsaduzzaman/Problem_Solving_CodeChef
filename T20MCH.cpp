//Problem name: T20MCH
//https://www.codechef.com/problems/T20MCH

#include<bits/stdc++.h>
using namespace std;
int main(){
    int R,O,C;
    cin >> R >> O >> C;
    int req_run=R-C;
    int remaining_over=20-O;
    if((remaining_over*6*6)>req_run){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}