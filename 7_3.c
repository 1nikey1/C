#include<stdio.h>
int qshu(int n, int k);
int main()
{
    int n, k;

    scanf ("%d", &n);
    scanf ("%d", &k);
    printf("%d从右边数的第%d个数是%d", n, k, qshu(n, k));

    return 0;
}
int qshu(int n, int k)
{
    int a = 0, i = 0;
    for (i = 1; i <= k; i++)
    {
        if (n == 0)
            a = 0;
        a = n % 10;
        n = n / 10;
    }
    return a;
}
