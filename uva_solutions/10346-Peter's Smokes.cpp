#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    long int sum;
    while(cin>>n>>k)
    {
        sum = n;
        while(n >= k)
        {
            sum += n / k;
            n = (n / k) + (n % k);
        }
        cout<<sum<<endl;
    }
}
