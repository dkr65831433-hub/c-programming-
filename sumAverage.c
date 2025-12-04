#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d",&x);
     printf("Enter second number: ");
    scanf("%d",&y);
     printf("Enter third number: ");
    scanf("%d",&z);
    float sum=x+y+z;
    float avg=sum/3;
    printf("Sum of three numbers: %.2f\n",sum);
    printf("Average of three numbers: %.2f",avg);
    return 0;
}