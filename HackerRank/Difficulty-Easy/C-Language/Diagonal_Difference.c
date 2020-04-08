// Program to find sum of both diagonals of a 2D matrix and then print the absolute difference between them.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i,j;
    int sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int row = 0; row < n; row++)
    {
       for(int col = 0; col < n; col++)
       {
         
          scanf("%d",&a[row][col]);
       }
    }
   for(i=0;i<n;i++)
     {
         sum1=sum1+a[i][i];
      }
     j=n-1;
     i=0;
   while(i<n)
     {
        sum2=sum2+a[i][j];
        i++;
         j--;
    
      }
    printf("%d",abs(sum1-sum2));
    return 0;
}
