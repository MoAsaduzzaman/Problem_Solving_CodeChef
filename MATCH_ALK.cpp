// Problem name: MATCH_ALK 
// https://www.codechef.com/START122D/problems/MATCH_ALK

#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<pair<int, int>> players(22);

        // Input for each player
        for (int i = 0; i < 22; ++i) {
            cin >> players[i].first >> players[i].second;
        }

        int maxScore = -1;
        int manOfTheMatch = -1;

        // Calculate scores and find the Man of the Match
        for (int i = 0; i < 22; ++i) {
            int score = players[i].first * 1 + players[i].second * 20;
            if (score > maxScore) {
                maxScore = score;
                manOfTheMatch = i + 1; // Player indices start from 1
            }
        }

        cout << manOfTheMatch << endl;
    }

    return 0;
}
