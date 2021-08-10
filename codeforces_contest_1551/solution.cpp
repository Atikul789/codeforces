#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t = "";
        cin>>s;
        int len = s.size();
        set<char> s1,s2;
 
        int uni1[150]={0}, uni2[150]={0};
        sort(s.begin(),s.end());
        for(int i = 0; i<len; i++)
        {
             uni1[s[i]]++;
        }
        int cnt1= 0;
        int cnt2 = 0;
        for(int i = 97 ; i<=122; i++)
        {
            if(uni1[i]>1)
            {
                cnt1++;
            }
            if(uni1[i]==1)
            {
                cnt2++;
            }
        }
        int ans = cnt1+(cnt2/2);
        cout<<ans<<endl;
    }
    return  0;
}