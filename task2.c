#include <stdio.h>


/*print a pattern 
    *****
    ****
    ***
    **
    *
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

        for (j = num; j >= i; j--)
        {
            /* code */

            printf("*");
        }
        
        printf("\n");
    }


    return 0;
    
}