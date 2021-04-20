#include <stdio.h>
#include <math.h>

void NhapMang(float A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d]: ", i);
        scanf("%f", &A[i]);
    }
}

int TimPhanTuGanNhat(float A[], int n, float x)
{
    float min = fabs(x - A[0]);
    int flag;
    for (int i = 1; i < n; i++)
    {
        if(min > fabs(x - A[i]))
        {
            min = fabs(x - A[i]);
            flag = i;
        }
    }
    return flag;
}

int main()
{
    float A[50], x;
    int n;
    int index;

    printf("Nhap vao n: ");
    scanf("%d", &n);

    NhapMang(A,n);
    
    printf("Nhap vao so x: ");
    scanf("%f", &x);

    index = TimPhanTuGanNhat(A,n,x);
    printf("Phan tu can tim: %f", A[index]);

    return 0;
}