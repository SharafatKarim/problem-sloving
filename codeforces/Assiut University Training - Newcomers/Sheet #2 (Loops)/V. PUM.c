#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int palm = 1;
    int i, j;
    for (i = 0; i <n; i++)
    {
        printf("%d %d %d PUM\n", palm, palm+1, palm+2);
        palm += 4;
    }
}