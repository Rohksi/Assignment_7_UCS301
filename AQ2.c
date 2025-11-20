#include<stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    int n1 = 4;
    int n2 = 4;
    int hash[10000] = {0};
    int i;

    for(i=0; i<n1; i++)
        hash[A[i]] = 1;

    for(i=0; i<n2; i++)
    {
        if(hash[B[i]] == 1)
            printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}