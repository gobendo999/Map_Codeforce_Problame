#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string log;
        cin >> n >> log;

        unordered_map<char, int> timeSpent;

        for (char c : log) {
            timeSpent[c]++;
        }

        int solved = 0;

        for (auto it = timeSpent.begin(); it != timeSpent.end(); ++it) {
            char problem = it->first;
            int time = it->second;
            int required = (problem - 'A') + 1;


            if (time >= required) {
                solved++;
            }
        }

        cout << solved << endl;
    }

    return 0;
}
