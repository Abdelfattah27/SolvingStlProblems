/// Problem D
/// http://codeforces.com/group/JVrN4brTDU/contest/339715/problem/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n  ;
    cin>>n ;
    vector<int>vec(n) ;
    for(auto &it : vec)
        cin>>it, it%=2 ;
    stack<int>st ;
    for(auto it : vec)
    {
        if(st.empty() || st.top() != it)
            st.push(it) ;
        else
            st.pop() ;
    }
    if(st.size() > 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
