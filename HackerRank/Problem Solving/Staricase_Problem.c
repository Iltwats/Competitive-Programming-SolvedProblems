//Program to print staircase made of #.
/* Ex- for n=4, 
               #
              ##
             ###
            ####
 */
#include<stdio.h>
void staircase(int n)
{
    for( int i=1;i<n+1;i++)
        {
        for(int k=1;k<=n-i;k++)
            {
            printf(" ");  
            }
        for(int j=i;j>0;j--)
            {
            printf("#");
        }
        printf("\n");
        }

}
int main()        
{
    int n;
    printf("Enter No.of Stairs\n");
    scanf("%d",&n);
    staircase(n);
    return 0;
    
}

