#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
        while(t--)
    {

    int n,i,x=0,j;
    cin>>n;
    int fr=0,sr=1;
    int a[n+1][n+1];

    while(fr < n)
    {

        for(i=0;i<n;i++)
        {
            x++;

            a[fr][i]=x;




        }
        fr=fr+2;

        for(j=n-1;j>=0;j--)
        {
             x++;
            a[sr][j]=x;


        }
       sr=sr+2;

    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }

}


}

