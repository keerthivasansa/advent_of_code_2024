#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    freopen("input.txt", "r", stdin);

    int n = 1000;

    unordered_map<int, int> m;
    vector<int> a(n);

    for (int i = 0; i < 1000; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = x;
        m[y]++;       
    }

    int similarityScore = 0;

    for (int el: a)
        similarityScore += m[el] * el;
    
    cout<<similarityScore<<"\n";
}