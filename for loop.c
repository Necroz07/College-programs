//palindrome or not
#include <stdio.h>
#include <stdbool.h>

void main(){


int num1, rev, clone;
printf("Enter num1:\t");
scanf("%d", &num1);

printf("num:\t%d", num1);

clone = num1;
rev=0;

rev=(rev*10)+(num1%10);
num1=num1/10;


rev=(rev*10)+(num1%10);
num1=num1/10;

rev=(rev*10)+(num1%10);
num1=num1/10;



printf("\nfinal num1:\t%d\nreversed:\t%d", num1, rev);

if (rev==clone){
    printf("\nThis three digit number is a palindrome.");
    }

else{
    printf("\nnah lmao");
}



}
