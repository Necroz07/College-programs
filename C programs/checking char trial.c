#include <stdio.h>

void main(){

char ch;
printf("Enter c:\t");
scanf("%c", &ch);



if (ch >='a' && ch<='z')
{
printf("small");
}

else if (ch>='A' && ch <= 'Z')
{
    printf("capital");
}

else if (ch>='0' && ch<='9')
    {
    printf("digit");
    }

else{
    printf("special");
    }
}
