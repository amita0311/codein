#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int ll

 

signed main()
{

    int t;
    cin >> t;


    while (t--)
    {
        int k,n;
        cin>>k>>n;
        map<int,int> ans;
        if(k==n){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        else{
            int c=0;
            int st=0;
            int sum=1;
            while(c<k&&sum<=n){
                
                if(c<k&&sum+st>n){
  
                    break;
 
                }
                else if(sum+st==n){
                    int m=c+1;
                    if(m<k){
                        break;
                    }

                }
                sum+=st;
                ans[sum]++;
                st++;
                c++;
                
                
            }

            if(c<k){
                int p=abs(k-c);
                //int s=n-p;
                for(int i=n;i>0;i--){
                    if(ans[i]==0 && p){
                        ans[i]++;
                        p--;
                    }
                    if(p==0)
                    break;
                    
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(ans[i])
                cout<<i<<' ';
            }

        }
        cout<<endl;

        
    }
    
}