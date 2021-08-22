//
// Created by mohit on 22-08-2021.
//
#include<math.h>
#include<stdio.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum=0;
    int s1,s2,i,j;
    s1=s2=0;
    for(i=0;i<arr_rows;i++)
    {   //for(j=0;j<arr_columns;j++)
        s1+=arr[i][i];
        s2+=arr[i][arr_rows-i-1];
    }
    sum=abs(s1-s2);
    return sum;
}

int main()
{   int r,c;
    printf("Enter order of matrix :\t");
    scanf("%d",&r);
    c = r;
    int arr[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    printf("%d",diagonalDifference(r,c,arr));
    return 0;
};
