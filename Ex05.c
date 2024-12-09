#include <stdio.h>

int prime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(prime(a))
        printf("true\n");
    else
        printf("false\n");
    
    if(prime(b))
        printf("true\n");
    else
        printf("false\n");
}
