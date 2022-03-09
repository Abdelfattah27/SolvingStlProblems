#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n ;
    cin>>n>>m ;
    vector<pair<int, int>> vec(n) ;
    for(auto &it : vec)
        cin>>it.first>>it.second ;
    sort(vec.begin(), vec.end()) ;
    vector<pair<int , int >> minimizer ;
    for(auto it : vec){
        if(minimizer.empty() || it.first > minimizer.back().second){
            minimizer.push_back(it) ;
        }
        else {
            minimizer.back().first = min(minimizer.back().first , it.first) ;
            minimizer.back().second = max(minimizer.back().second , it.second) ;
        }
    }
    for(auto it : minimizer)
        cout<<it.first<<" "<<it.second<<endl;

}
