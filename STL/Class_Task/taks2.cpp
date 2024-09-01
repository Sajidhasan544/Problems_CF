#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = arr[q + 1 + j];
    }

    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] < M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = M[j];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergsort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - 1) / 2;
        mergsort(arr, l, m);
        mergsort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {6, 5, 12, 10, 9, 11};
    int size = 6;

    mergsort(arr, 0, size - 1);

    cout << "Sorted array : " << endl;
    printArray(arr, size);
}