// sun's code 

#include <bits/stdc++.h>

using namespace std;

int n, a[1000001];

void QuickSort(int a[], int left, int right)
{
    int Left = left; 
    int Right = right;
    int mid = a[left + right >> 1];

    while (Left <= Right)
    {
        while (a[Left] < mid) ++Left;
        while (a[Right] > mid) -- Right;

        if (Left <= Right)
        {
            swap(a[Left], a[Right]);
            ++Left;
            --Right;
        }
    }

    if (left < Right) QuickSort(a, left, Right);
    if (Left < right) QuickSort(a, Left, right);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i];

    QuickSort(a, 1, n);

    return 0;
}