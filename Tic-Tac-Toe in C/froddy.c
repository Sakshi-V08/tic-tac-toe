#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, n, i, j;

    printf("Enter no. of jumps and shouts:\n");
    scanf("%d %d", &a, &b);
    char str[b];
    int arr[a][a-1];
    printf("enter string\n");
    scanf("%s", &str);
    n = strlen(str)-1;
    printf("enter x and y coordinate:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == n)
            {
                printf("\n%d\t",arr[i][j]);
            }
        }
    }
    return 0;
}