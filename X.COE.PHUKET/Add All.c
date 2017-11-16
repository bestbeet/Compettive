#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  unsigned n, a, cost, min_cost;
  priority_queue <unsigned, vector<unsigned>, greater<unsigned> > q;

  while (cin >> n && n) {
    min_cost = 0;

    for (unsigned i = 0; i < n; i++) {
      cin >> a;
      q.push(a);
    }
    while (q.size() > 1) {
      cost = q.top();
      q.pop();
      cost += q.top();
      q.pop();
      min_cost += cost;
      q.push(cost);
    }
    cout << min_cost << endl;

    while (!q.empty()) q.pop(); // reset pq
  }

  return 0;
}
