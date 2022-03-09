///prpblem A
/// http://codeforces.com/group/nMgBPsURd2/contest/339715/problem/A

#include<bits/stdc++.h>
using namespace std ;
stack <int>st ;  // the nearest index of "(" ;

string s ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int frq[200] = {};

        cin>>s ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            char c = s[i] ;
            if(c == '{')
              st.push( 1) ;
            else if(c ==',')
            {
                st.top() ++ ;
            }
            else if(c == '}')
            {
                frq[st.size()] = max( frq[st.size()] , st.top()) ;
                st.pop() ;
            }

        }
       for(int i = 1 ; i < 200 ; i++)
       {
           if(frq[i])
            cout<<'['<<frq[i]<<']' ;
           else
            break ;
       }
       cout<<endl;
    }

}
