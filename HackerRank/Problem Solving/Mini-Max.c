// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
//Then print the respective minimum and maximum values as a single line of two space-separated long integers.

// For example arr=[1,3,5,7,9] . Our minimum sum is- 1+3+5+7=16  and our maximum sum is- 3+5+7+9=24 . We would print 16 24.

#include<stdio.h>
int main(){
    unsigned long long int num[5],max,min,sum=0;
    int i;
    scanf("%lld",&num[0]);
      max=num[0];
      min=num[0];
      sum=num[0]+sum;
    for(i=1;i<5;i++)
    {
        scanf("%lld",&num[i]);
        if(max<num[i])
            max=num[i];
        if(min>num[i])
            min=num[i];
        sum=sum+num[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
