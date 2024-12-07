#include <bits/stdc++.h>
#define FAST std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool pal(string s)
{
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return false;
        }
    }
     return true;
}
string rem(string s)
{
    string ans="";
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        ans+=tolower(s[i]);
            if(isdigit(s[i]))
            ans+=s[i];
    }
    return ans;
}
int main()
{
    FAST
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        s=rem(s);
        if(pal(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}