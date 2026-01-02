    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            int k;
            cin>>n;
            cin>>k;
            string vec;
            cin>>vec;
            int count=0;
            int rem=0;
            for(int i=0;i<n;i++)
            {
                if(vec[i] == '1')
                {
                    rem=k;
                }
                if(rem != 0 && vec[i] == '0')
                {
                    rem=rem-1;
                }
                else if(rem == 0 && vec[i] == '0')
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }