#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        priority_queue<pair<long long, int>> pq;
        for (int i = 0; i < n; ++i) {
            if (b[i] == 1) {
                pq.push({a[i], i});
            }
        }

        while (k > 0 && !pq.empty()) {
            auto [val, idx] = pq.top();
            pq.pop();
            long long inc = min(k, k); // Increment as much as possible within the limit
            a[idx] += inc;
            k -= inc;
            pq.push({a[idx], idx});
        }



        long long max_score = 0;
        for (int i = 0; i < n; ++i) {
            vector<long long> ci = a;
            ci.erase(ci.begin() + i);
            sort(ci.begin(), ci.end());
            long long median = ci[(n-1)/2];
            max_score = max(max_score, a[i] + median);
        }

        cout << max_score << endl;
    }
    return 0;
}
