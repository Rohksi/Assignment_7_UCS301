#include<stdio.h>

int main()
{
    int arr[] = {4, 5, 1, 2, 0, 4};
    int n = 6;
    int freq[10000] = {0};
    int i;

    for(i=0; i<n; i++)
        freq[arr[i]]++;

    for(i=0; i<n; i++)
    {
        if(freq[arr[i]] == 1)
        {
            printf("%d\n", arr[i]);
            break;
        }
    }

    return 0;
}