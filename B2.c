#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * (i + 1);
    }
    printf("s = %d", s);
    return 0;
}
