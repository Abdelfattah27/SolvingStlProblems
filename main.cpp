/// problem B
/// http://codeforces.com/group/JVrN4brTDU/contest/339715/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    vector<pair<int, int>> vec(n);
    for (auto& it : vec)
        cin >> it.first >> it.second;
    sort(vec.begin(), vec.end());
    vector<pair<int, int >> minimizer;
    for (auto it : vec)
    {
        if (minimizer.empty() || it.first > minimizer.back().second)
        {
            minimizer.push_back(it);
        }
        else
        {
            minimizer.back().first = min(minimizer.back().first, it.first);
            minimizer.back().second = max(minimizer.back().second, it.second);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, mn;
        cin >> l >> r;
        mn = min(l, r);
        r = max(l, r);
        l = mn;
        auto c = lower_bound(minimizer.begin(), minimizer.end(), make_pair(l, 0));
        if ((c != minimizer.end()) && (c->first) == l)
        {
            if (c->second >= r)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            if (c != minimizer.begin() && (((--c)->second) >= r))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }

    }

}
