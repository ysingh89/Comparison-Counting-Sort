#include<iostream>
using namespace std;

int main()
{
    int a[] = {7,3,9};
    int s[3];
    int count[3];
    int n=3;
    for (int i=0;i<n;i++)
    {
        count[i]=0;
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count[j]=count[j]+1;
            }
            else
            {
                count[i]=count[i]+1;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        s[count[i]] = a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}