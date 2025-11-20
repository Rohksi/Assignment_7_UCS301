#include<stdio.h>

int main()
{
    int nums[] = {2, 3, 2, 4, 3, 2};
    int n = 6;
    int count[10000] = {0};
    int i;

    for(i=0; i<n; i++)
        count[nums[i]]++;

    for(i=0; i<10000; i++)
    {
        if(count[i] > 0)
            printf("%d -> %d times\n", i, count[i]);
    }

    return 0;
}