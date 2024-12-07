#include <bits/stdc++.h>
#define FAST std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int solve(string s)
{
    int c=0;
    while(s.size()!=1)
    {
        c++;
       long long sum=0;
        for(int i=0;i<(int)s.size();i++)
        {
            sum+=(s[i]-'0');
        }
        s=to_string(sum);
    }
    return c;
}
int main()
{
    FAST
  string s;
  cin>>s;
  cout<<solve(s);
    return 0;
}