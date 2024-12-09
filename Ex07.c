#include <stdio.h>

void xuatMang(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void nhapMang()
{
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int a[100][100];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    xuatMang(a, row, col);
}
int main(){
    nhapMang();
}