/* 

In order to find out fibonacci number in a bottom up manner we will create
an array of size n where n is the nth fibonacci term. We will store our base 
values and keep on finding next term using those values as:

f(0) = 0
f(1) = 1

now 

f(2) = f(0)+f(1)
f(2) = 1

and so on ..

-------------------------Time and Space------------------------

Time - O(n) 
Space - O(1)

---------------------------------------------------------------

*/

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n<=1) return n;

    vector<int> f(n+1,0);

    // base values
    f[0]=0;
    f[1]=1;

    for(int i=2;i<=n;i++)
    {
        f[i] = f[i-2] + f[i-1];
    }

    return f[n];

}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);

    // the term to find
    int n=0;
    cin>>n;

    // the nth fibonacci term 
    cout<<fibonacci(n);

    return 0;
}
