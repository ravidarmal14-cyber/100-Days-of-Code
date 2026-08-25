/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main(){

    int l1;
    int l2;
    int l3;

    printf("Enter length of first side");
    scanf("%d", &l1);

    printf("Enter length of second side");
    scanf("%d", &l2);

    printf("Enter length of third side");
    scanf("%d",&l3);

    if(l1<(l2+l3) || l2<(l1+l3) || l3<  (l1+l2)) {
        printf("valid/n");

        if ("l1==l2 && l2==l3 && l3=l1")
            printf("It is equilateral triange");

        if ("l1==l2 || l2=l3 || l3==l1")
            printf("It is a equilateral triangle");

        if("l1*l1==l2*l2+l3*l3 || l2*l2==l1*l1+l3*l3 || l3*l3==l1*l1+l2*l2")
                printf("It is a equilateral triangle");
    
        else {
            printf("it is a scalene triangle");
        }
    }
   
    else{
        printf("Not valid");
    }

    return 0;

    }

    






