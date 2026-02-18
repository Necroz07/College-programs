#include <stdio.h>


void printntimes(int n, char y);

void main(){

char y = 'A';
for (int x=5; x>0; x--){



printntimes(x, y);

y++;
}
}


void printntimes(int n, char y){

for (int x=0; x<n; x++){

    printf("%c", y);

}

printf("\n");
}
