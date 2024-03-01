//sun's code 

#include <bits/stdc++.h>

using namespace std;

int n, a[1000001];

void merge(int a[], int left, int mid, int right)
{
    vector<int> leftArray, rightArray;

    for (int i = left; i <= right; ++i) 
        if (i <= mid) 
            leftArray.push_back(a[i]); 
        else 
            rightArray.push_back(a[i]);

    while (leftArray.size() && rightArray.size())
    {
        if (leftArray.back() > rightArray.back()) 
            a[right--] = leftArray.back(), leftArray.pop_back();
        else 
            a[right--] = rightArray.back(), rightArray.pop_back(); 
    }

    while (leftArray.size()) 
        a[right--] = leftArray.back(), leftArray.pop_back();

    while (rightArray.size())
        a[right--] = rightArray.back(), rightArray.pop_back();
}

void MergeSort(int a[], int left, int right)
{
    if (left >= right) return;
    
    int mid = left + right >> 1;

    MergeSort(a, left, mid);
    MergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    MergeSort(a, 1, n);
    
    return 0;
}