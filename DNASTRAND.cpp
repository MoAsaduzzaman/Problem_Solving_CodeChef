//Problem name: DNASTRAND
//https://www.codechef.com/problems/DNASTRAND

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        string S;
        string S1="";
        cin >> N;
        cin >> S;
        for(int i=0; i<N; i++){
            if(S[i]=='A'){
                S1+="T";
            }else if(S[i]=='T'){
                S1+="A";
            }else if(S[i]=='C'){
                S1+="G";
            }else{
                S1+="C";
            }      
        }
        cout << S1 << endl;
    }
    return 0;
}