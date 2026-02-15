#include <stdio.h>

void main(){

int days, seconds, minutes, hours, weeks, months, years;

printf("Enter the number of days:\t");
scanf("%d",&days);
printf("days-%d\n", days);



seconds= (days*(86400));
minutes= days*(1440);
hours= days*(24);
weeks= days/7;
months= days/30;
years= days/365;


printf("Days-%d\nSeconds-%d\nMinutes-%d\nHours-%d\nWeeks-%d\nMonths-%d\nYears-%d", days, seconds, minutes, hours, weeks, months, years);


}
