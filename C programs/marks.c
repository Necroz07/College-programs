/* wap for

100-80 discticntinton
79-80 first class
59-40 second class
<40 fail */


#include <stdio.h>


void main(){

int score;

printf("marks daalde tere:\t");
scanf("%d", &score);


printf("marks:\t%d\n", score);

if (score>=80 && score<=100){

printf("topper 😍😍😍 (distinction)");

}

else if (score>=60 && score<=79){
printf("good job yaar first class");
}

else if (score>=40 && score<=59){
    printf("pass hogya");
}

else{
    printf("fail 🤣🤣🤣");
}

}
