///https://codeforces.com/group/nMgBPsURd2/contest/342685/problem/K


#include <bits/stdc++.h>
#include <cmath>
using namespace std ;
#define int long long

signed main()
{
    int n ;
    cin>>n ;
    map<int, int>mp ;
   vector<int>vec(n) ;
   for(auto &it : vec)cin>>it , mp[it]++ ;
    vector<int>power(34) ;
    for(int i = 0 ; i <= 33 ; i ++)
        power[i] = (int)1<<i ;
    int res = 0 ;
    for(auto it : vec)
    {
       mp[it]-- ;
        for(int i = 0 ; i <= 33 ; i++)
        {
            if(mp[power[i] - it] > 0)
            {
                res++ ;
                break ;
            }
        }
        mp[it] ++ ;
    }
    cout<<n - res <<endl;
}
