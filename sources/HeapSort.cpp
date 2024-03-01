// sun's code 

#include <bits/stdc++.h>

using namespace std;

int n, a[1000001];

void heapify(int a[], int size, int index)
{
    int root = index;
    int left = root << 1;
    int right = root << 1 | 1;

    if (left <= size && a[left] > a[root]) root = left;
    if (right <= size && a[right] > a[root]) root = right;

    if (root != index)
    {
        swap(a[root], a[index]);
        heapify(a, size, root);
    }
}

void HeapSort(int a[], int n)
{
    for (int i = n / 2; i > 0; --i) heapify(a, n, i);

    for (int i = n; i > 0; --i) 
    {
        swap(a[1], a[i]);
        heapify(a, i - 1, 1);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n; 
    for (int i = 1; i <= n; ++i) cin >> a[i];

    HeapSort(a, n);

    return 0;
}