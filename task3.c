#include <stdio.h>


/*print a pattern 
    1,
    1,2
    1,2,3
    1,2,3,4
    1,2,3,4,5
till n.
*/


int main(void)
{
    int num, i, j;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        /* code */

        for (j = 1; j <= i; j++)
        {
            /* code */

            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;

    
}