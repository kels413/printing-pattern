#include <stdio.h>


/*print a pattern 
   1,
   2,3
   4,5,6
   7,8,9,10
   11,12,13,14,15.
till n.
*/



int main(void)
{
    int num, i, j, count = 1;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        /* code */

        for (j = 1; j <= i; j++)
        {
            /* code */

            printf("%d", count);
            
            count++;
        }
        
        printf("\n");
    }

    return 0;
}