/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>

int main(){
    float P;
    float R;
    float T;
    printf("enter principal value");
scanf("%f",&P);

printf("enter rate value");
scanf("%f",&R);

printf("enter time value");
scanf("%f",&T);

float SI=(P*R*T)/100;
printf("Simple interest is %0.3f",SI);
return 0;





}
