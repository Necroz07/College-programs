/*

pattern
    *
   **
  ***
 ****
*****

*/





#include <stdio.h>

void printntimes(int n, char c);




void pyramid(int x)
{

    for (int num = 0; num < x; num += 1)
    {
        int spaces = (x - num - 1);
        printntimes(spaces, ' ');
        printntimes(num+1, '*');
        printf("\n");
    }
}









void printntimes(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}











int main(void)
{

    int n;
    do
    {

        printf("Enter the height of the pyramid: ");
        scanf("%d", &n);

    }
    while (n <= 0);
    pyramid(n);
}
