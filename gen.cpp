//sun's code 

#include <bits/stdc++.h>

using namespace std;

const int n = 1000000;
int a[1000001];

void gen(bool greater, bool less)
{
    for (int i = 1; i <= n; ++i) a[i] = rand() * rand();
    if (greater) sort(a + 1, a + n + 1);
    if (less) sort(a + 1, a + n + 1, [] (int u, int v)
    {
        return u > v;    
    });

    cout << n << endl;
    for (int i = 1; i <= n; ++i) cout << a[i] << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    srand(time(NULL));

    freopen("test00.INP", "w", stdout); gen(1, 0);
    freopen("test01.INP", "w", stdout); gen(0, 1);
    freopen("test02.INP", "w", stdout); gen(0, 0);
    freopen("test03.INP", "w", stdout); gen(0, 0);
    freopen("test04.INP", "w", stdout); gen(0, 0);
    freopen("test05.INP", "w", stdout); gen(0, 0);
    freopen("test06.INP", "w", stdout); gen(0, 0);
    freopen("test07.INP", "w", stdout); gen(0, 0);
    freopen("test08.INP", "w", stdout); gen(0, 0);
    freopen("test09.INP", "w", stdout); gen(0, 0);

    return 0;
}