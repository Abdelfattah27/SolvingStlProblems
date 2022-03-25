/// https://codeforces.com/group/nMgBPsURd2/contest/342685/problem/A


#include <bits/stdc++.h>
#include <cmath>
using namespace std ;

int main()
{
    int n, m ;
    cin>>n>>m ;
    vector<int>items(n) ;
    vector<int>cars(m) ;
    for(auto &it : items)
        cin>>it;
    for(auto &it : cars)
        cin>>it ;
    sort(items.begin(), items.end()) ;
    sort(cars.begin(), cars.end(), greater<>()) ;
int res = 0 ;
    while(items.size()){
        res++ ;
        for(int i = 0 ; i < m ; i ++){
           auto it =  upper_bound(items.begin() , items.end() , cars[i]) ;
           if(it == items.begin())
               break ;
           it-- ;
           items.erase(it) ;
        }
        if(items.size())
            res++ ;

    }
    cout<<res<<endl;
}
