#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    int left = 0, right = 0;

    for (int i = 0; i < arr_rows; i++)
    {
        left += arr[i][i];
        right += arr[i][arr_columns - 1 - i];
    }

    return abs(left - right);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        left += arr[i][i];
        right += arr[i][n - 1 - i];
    }

    printf("%d\n", abs(left - right));

    return 0;
}
