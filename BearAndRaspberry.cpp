#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,c,s=0;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]-a[i+1]-c>0)
        {
            if(s<a[i]-a[i+1]-c)
            {
               s=a[i]-a[i+1]-c;
            }
        }
    }
    cout<<s;
    return 0;
}