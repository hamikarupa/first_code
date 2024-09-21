#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two integers=");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
      printf("Num1 is the largest",num1);
    else if (num1<num2)
      printf("Num2 is largest");
    else 
      printf("numbers are equal");
     return 0;      
}