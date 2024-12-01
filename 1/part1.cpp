#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int n = 1000;

    vector<int> a(n), b(n);

    for (int i = 0; i < 1000; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = x;
        b[i] = y;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int totalDist = 0;
    for (int i = 0; i < 1000; i++) 
        totalDist += abs(a[i] - b[i]);
    
    cout<<totalDist<<"\n";
}