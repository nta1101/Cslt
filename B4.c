// tao mot ham dem phan tu
// cho ham do chay tat ca cac phan tu
#include <stdio.h>

#define max 100

void NhapMang(int A[], int n)
{   
    for(int i = 0; i < n; i++)
    {
        printf("phan tu %d = ",i);
        scanf("%d",&A[i]);
    }
}

// dem so lan cua so duoc chon la x
int Count(int A[], int n, int x)
{   
    int temp = 0;
    for(int i = 0; i < n; i++)
    if(A[i] == x)
    {
        temp++;
    }
    return temp;
}

int Count1(int A[], int n)
{
    int temp1, temp = Count(A,n,A[0]), index = 0;
    for(int i = 1; i < n; i++)
    {
        temp1 = Count(A,n,A[i]);
        if(temp < temp1)
        {
            temp = temp1;
            index = i;
        }
    }
    return A[index];
}

int main()
{
    int B[max];
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);

    NhapMang(B,n);

    printf("\nPhan tu xuat hien nhieu nhat la: %d", Count1(B, n));
    return 0;
}