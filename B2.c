#include <stdio.h>

int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * (i + 1);
    }
    printf("%d", &s);
    return 0;
}

//ahihiß
//ahihi cai con ciu
