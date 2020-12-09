// 2003_아이콘확대
// Sol1
// 메모리: 1124, 시간: 0, 코드길이: 840B
#include <stdio.h>
char arr[75][75];
int main(void)
{
    int k, i, j;
    
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
        for (j = 1; j <= k; j++)
        {
            arr[i][j] = '*';
            arr[i][j + k] = 'x';
            arr[i][j + k * 2] = '*';
        }
    for (i = 1; i <= k; i++)
        for (j = 1; j <= k; j++)
        {
            arr[i + k][j] = ' ';
            arr[i + k][j + k] = 'x';
            arr[i + k][j + k * 2] = 'x';
        }
    for (i = 1; i <= k; i++)
        for (j = 1; j <= k; j++)
        {
            arr[i + k * 2][j] = '*';
            arr[i + k * 2][j + k] = ' ';
            arr[i + k * 2][j + k * 2] = '*';
        }
    for (i = 1; i <= k * 3; i++, puts(""))
        for (j = 1; j <= k * 3; j++)
            printf("%c", arr[i][j]);
    return 0;
}
