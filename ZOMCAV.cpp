#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // yr code goes here
    int t;
    cin>>t;

    while(t--)
        {
         int n,i,x,j,count=0,r1,r2;
         bool flag=false;
        cin>>n;

        long long int c[n+1],h[n+1],a[n+1]={0};
        for(i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        for(j=1;j<=n;j++)
        {
            cin>>h[j];

        }
        for(i=1;i<=n;i++)
        {
            r1=i-c[i];
            if(r1<=0)
            r1=1;
            r2=i+c[i];
            a[r1]+=1;
            if(r2+1<n+1)
            a[r2+1]-=1;
        }
        for(i=1;i<=n;i++)
        {
    a[i]+=a[i-1];
        }

        sort(h+1,h+n+1);
        sort(a+1,a+n+1);
       for(i=1;i<=n;i++)
        {
           if(a[i]!=h[i])
           {
           flag=true;
           break;
       }}
       if(flag==true)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }

       }

  return 0;
}

