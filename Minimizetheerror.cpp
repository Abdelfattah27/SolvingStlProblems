/// https://codeforces.com/group/nMgBPsURd2/contest/342685/problem/M


#include <bits/stdc++.h>
#include <cmath>
using namespace std ;
#define int long long

signed main()
{
    int n, k1, k2 ;
    cin>>n>>k1>>k2 ;
    vector<int>a(n) ;
    vector<int>b(n) ;
    for(auto &it:a)
        cin>>it ;
    for(auto &it:b)
        cin>>it ;
    priority_queue<int>sub ;
    for(int i = 0 ; i < n ; i ++)
        sub.push(abs(a[i] - b[i])) ;
    for(int i = 0 ; i < k1 + k2 ; i++)
    {
        int u = sub.top() ;
        sub.pop() ;
        if(u > 0)
            u-- ;
        else
            u ++ ;
        sub.push(u) ;
    }
    int ans = 0 ;
    while(sub.size() && sub.top() != 0)
    {
        ans += pow(sub.top() , 2) ;
        sub.pop() ;
    }
    cout<<ans<<endl;
}
