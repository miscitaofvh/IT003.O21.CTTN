//sun's code 

#include <bits/stdc++.h>

using namespace std;

int n, a[1000001];

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    sort(a + 1, a + n + 1);

    return 0;
}