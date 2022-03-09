/// problem C
/// http://codeforces.com/group/nMgBPsURd2/contest/339715/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>vec;
    while (n--) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    for (auto it : vec) {
        int m, p, d, mul, z, n;
        m = p = d = mul = z = n = 0;
        for (auto dig : it) {
            if (dig == '*') mul++;
            else if (dig == '/') d++;
            else if (dig == '-') m++;
            else if (dig == '+') p++;
            else if (dig == '0') z++;
            else if (isdigit(dig)) n++;
        }
        int numOfOps = d + m + p + mul;
        if ((numOfOps + 1 == n + z) && n >= d)
            cout << "Valid" << endl;
        else if ((numOfOps == n + z) && n > d && m != 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }

}
