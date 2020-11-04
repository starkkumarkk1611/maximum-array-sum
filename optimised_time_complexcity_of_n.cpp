#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int current_sum=0;
    int mx=INT_MIN;
    //using only one loop 
    for(int i=0;i<n;i++)
    {
        current_sum=current_sum+a[i];
        if(a[i]<0)
        {
            current_sum=0;
        }
        
        mx=max(mx,current_sum);
    }
    cout<<mx;
    return 0;
}