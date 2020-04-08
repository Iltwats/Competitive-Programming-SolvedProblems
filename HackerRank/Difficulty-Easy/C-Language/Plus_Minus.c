//Given an array of integers, calculate the fractions of its elements that are positive, negative, and are zeros.
//Print the decimal value of each fraction on a new line.
/*  You must print the following  lines:
    1.A decimal representing of the fraction of positive numbers in the array compared to its size.
    2.A decimal representing of the fraction of negative numbers in the array compared to its size.
    3.A decimal representing of the fraction of zeros in the array compared to its size.
*/

#include <stdio.h>
int main()
{
    int n,i;
    int positive=0,negative=0,zero=0;
    int arr;
    float pos_occ,neg_occ,zer_occ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr);
    
        if(arr>0)
        {
            positive++;
        }
        else if (arr<0)
        {
            negative++;
        }
        
    }
    pos_occ=(float)positive/n;
    neg_occ=(float)negative/n;
    zer_occ=(float)(n-positive-negative)/n;
    printf("%f\n",pos_occ);
    printf("%f\n",neg_occ);
    printf("%f",zer_occ);

    return 0;
}
