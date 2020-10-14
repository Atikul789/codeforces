#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string games;
        int n,k;
        cin>>n>>k;
        cin>>games;
        int len= games.size();
        int cntwins = 0, cntloses=0;
        vector<int> wins, gaps;
        for(int pos = 0 ;pos<n; pos++)
        {
            if(games[pos]=='W')
            {
                cntwins++;
                wins.push_back(pos);
            }
            else
            {
                cntloses++;
            }
        }

        len = wins.size();
        for(int i = 0; i<len-1; i++)
        {
            if(wins[i+1]-wins[i]>1)
            {
                gaps.push_back(wins[i+1] - wins[i]-1);

            }
        }
        len  = gaps.size();
        //cout<<len<<" len "<<endl;
        sort(gaps.begin(),gaps.end());
        //cout<<cntwins<<" cntwins "<<endl;
        long long ans = cntwins*2;
        ans = ans  - len-1;
       // cout<<ans<<" ans "<<endl;

        if(len>0)
        {
            int ind = 0;
            while(k>=gaps[ind]&& ind<len)
            {
                ans = ans+(2*gaps[ind]) + 1;
               // cout<<gaps[ind]<<" gap[ind]"<<endl;
                cntloses= cntloses - gaps[ind];
                k = k - gaps[ind];
                ind++;
            }

        }
         //cout<<k<<" k "<<endl;
         ans = ans + (2*min(cntloses,k));
         ans = max(ans, 0LL);
        cout<<ans<<endl;




    }
}
