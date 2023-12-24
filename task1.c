#include <stdio.h>

/*print a pattern 
    *
    **
    ***
    ****
    *****
till infinity.
*/

int main(void)
{
    int num, i, j;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        /* code */

        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
        }

        printf("\n");
        
    }
    

    return 0;
}