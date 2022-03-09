///proplem E
///http://codeforces.com/group/nMgBPsURd2/contest/339715/problem/E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n  ;
    cin>>n ;
    vector<int>vec(n) ;
    for(auto &it : vec)
        cin>>it ;
    stack<int>st ;
    auto Max = max_element(vec.begin(), vec.end()) ;
    for(auto it : vec)
    {

        if(st.empty() || st.top() > it)
            st.push(it) ;
        else if(st.top() == it)
            st.pop();
        else
        {
            cout<<"NO"<<endl;
            return 0 ;
        }
    }
    if(st.size() > 1 || (st.size() == 1 && st.top() != *Max))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
