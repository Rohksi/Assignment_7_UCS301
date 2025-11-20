#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = 4;
    int a[10000] = {0};
    int i;
    int flag = 0;

    for(i=0; i<n; i++)
    {
        if(a[nums[i]] == 1)
        {
            flag = 1;
            break;
        }
        a[nums[i]] = 1;
    }

    if(flag == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}