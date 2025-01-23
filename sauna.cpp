#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> startIntvl(n),endIntvl(n);
    for(int i = 0; i < n; i++) {
        cin >> startIntvl[i] >> endIntvl[i];
    }
    sort(startIntvl.begin(),startIntvl.end());
    sort(endIntvl.begin(),endIntvl.end());
    
    int maxStart = startIntvl.back();
    int minEnd = endIntvl[0];

    if(minEnd - maxStart < 0) {
        cout << "bad news" << '\n';
        return 0;
    }

    else {
        cout << minEnd - maxStart + 1 << ' ' << maxStart << '\n';
    }

    return 0;
}