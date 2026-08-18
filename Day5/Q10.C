#include <stdio.h>

int main(){

int s;

printf("Enter time in seconds :");
scanf("%d",s);

printf("hours:%d,minutes:%d,seconds:%d"),s/36000,(s%3600)/60,(s%3600)%60  ;

}