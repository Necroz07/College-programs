/*

pattern-

*****
 ****       spaces = 0, 1, 2, 3, 4            5-i
  ***
   **
    *

*/



#include <stdio.h>


void main(){

for (int i=5; i>0; i--){

    for (int spaces=0;spaces < 5-i; spaces++){
        printf(" ");}
            for (int j=0; j < i; j++){
                printf("*");}
printf("\n");
                        }
}
