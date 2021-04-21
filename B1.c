#include <stdio.h>
#include <math.h>

int SoNguyenTo(int x)
{
    if (x == 1 || x <=0 ) return -1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        return -1;
    }
    return 1;
}

void NhapPhanTu(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i);
        scanf("%d",&A[i]);
    }
}

int demSoNguyenTo(int A[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(SoNguyenTo(A[i]) == 1)
        count++;
    }
    return count;
}

int main()
{
    int A[50], n;
    int primes;
    printf("Nhap so luong ");
    scanf("%d",&n);

    NhapPhanTu(A,n);
    primes = demSoNguyenTo(A,n);
    printf("so luong cac so nguyen to: %d", primes);
    return 0;
}