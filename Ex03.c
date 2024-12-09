#include <stdio.h>

int giaiThua(int a)
{
    int result = 1;
    while (a != 0)
    {
        result *= a--;
    }
    printf("%d ", result);
}
int main()
{
    giaiThua(5);
}