#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int i,j;
int main()
{   int row,col;
    printf("Enter order of matrix :\t");
    scanf("%d",&row);
    col = row;
    int arr[row][row];
    for(i=0;i<row;i++)
    {   printf("Row %d\n",i+1);
        for(j=0;j<col;j++)
        {   printf("Enter the %d element :\n",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<row;i++)
    {   for(j=0;j<col;j++)
    {   if(i==j)
            s1+=arr[i][j];
        if(i==row-j-1)
            s2+=arr[i][j];
    }
    }
    printf("Sum1 %d\n",s1);
    printf("Sum2 %d\n",s2);
    int sum=abs(s1-s2);
    printf("Sum Abs : %d",sum);
    //printf("%d",diagonalDifference(row,col,arr));
    return 0;
}
