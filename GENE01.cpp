//Problem name: GENE01
//https://www.codechef.com/problems/GENE01

#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,b;
    cin >> a >> b;

    if(a=='R' && b=='B'){
        cout << a << endl;
    }else if(a=='R' && b=='G'){
        cout << a << endl;
    }else if(a=='B' && b=='G'){
        cout << a << endl;
    }else if(a=='B' && b=='R'){
        cout << b << endl;
    }else if(a=='G' && b=='R'){
        cout << b << endl;
    }else if(a=='G' && b=='B'){
        cout << b << endl;
    }else if(a=='R' && b=='R'){
        cout << a << endl;
    }else if(a=='B' && b=='B'){
        cout << a << endl;
    }else if(a=='G' && a=='G'){
        cout << a << endl;
    }

    return 0;
}
