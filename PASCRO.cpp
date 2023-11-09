//Problem name: PASCRO
//mhttps://www.codechef.com/START107D/problems/PASCRO

#include<bits/stdc++.h> 
using namespace std; 
int main(){
    int T; 
    cin >> T; 
    while (T--) 
    { 
        int n; 
        cin >> n; 

        string s1, s2; 
        cin >> s1 >> s2; 

        int a = 0;
        int b = 0; 

        for (int i = 0; i < n; i++){ 
            if (s1[i] == 'R') 
            { 
                if (s2[i] == 'P') 
                    b++; 
                else if (s2[i] == 'S') 
                    a++; 
            } 
            else if (s1[i] == 'S') 
            { 
                if (s2[i] == 'R') 
                    b++; 
                else if (s2[i] == 'P') 
                    a++; 
            } 
            else if (s1[i] == 'P') 
            { 
                if (s2[i] == 'S') 
                    b++; 
                else if (s2[i] == 'R') 
                    a++; 
            } 

        } 

        if (a > b) 
            cout << 0 << endl; 
        else 
            cout << abs(b - a)/2+1 << endl; 
    } 

    return 0;
}
