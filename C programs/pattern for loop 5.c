#include <stdio.h>


void printntimes(int n, int y);

void main(){


for (int x=5; x>0; x--){

printntimes(x, x);


}


}


void printntimes(int n, int y){

for (int x=0; x<n; x++){

    printf("%d", y);

}

printf("\n");
}
