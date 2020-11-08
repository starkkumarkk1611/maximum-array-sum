#include<iostream>
#include<climits>
using namespace std;
int kidens_algo(int a[],int n)
{   
    int max_sum=INT_MIN;
    int cur_sum=0;

    for(int i=0;i<n;i++)
    {
        cur_sum+=a[i];
        if(cur_sum<0)
        {
            cur_sum=0;
        }
        max_sum=max(cur_sum,max_sum);
    }
    return max_sum;
}
int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int non_wrap=kidens_algo(a,n);
    int total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=a[i];
        a[i]=-a[i];
    }
    int non_sum_contributing=kidens_algo(a,n);
    int wrap_sum=total_sum+non_sum_contributing;
    int max_sum=max(wrap_sum,non_wrap);
    cout<<max_sum;

    return 0;
}