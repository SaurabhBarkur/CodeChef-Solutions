#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long long t;
    cin>>t;
    while(t--)
    {

       long long ts;
        cin>>ts;
          if(ts==1)
        {
            cout<<"0"<<endl;
        }
        else if(ts%2==1)
        {
            cout<<((ts-1)/2)<<endl;
        }
       else
       {
             while(ts%2==0)
      {
         ts=ts/2;
       }
       if(ts==1)
       {
           cout<<"0"<<endl;
       }
       else
       {
           cout<<((ts-1)/2)<<endl;
       }



       }
    }
    return 0;
}
