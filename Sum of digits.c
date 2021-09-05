#include<stdio.h> 
Sum_of_digits(int num) {
int sum;
if(num==0)
return 0;
else {
sum= num%10+Sum_of_digits(num/10);
return sum;}
}

int main() {
int num;
printf("Enter a number\n"); 
scanf("%d",&num);
printf("Sum of the digits of %d is %d", num, Sum_of_digits(num)); 
return 0;
}
