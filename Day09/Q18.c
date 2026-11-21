/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main(){

    int percentage;
    
    printf("Enter your percentage :");
    scanf("%d",percentage);

    if (100>=percentage && 90<=percentage){
        printf("Grade A");
    }

    else if (89>=percentage && 80<=percentage){
        printf("Grade B");
    }

    else if (79>=percentage && 70<=percentage){
        printf("Grade C");
    }
    
    else if (69>=percentage && 60<=percentage){
        printf("Grade D");
    }

    else {
    printf("Grade F");
    }

}