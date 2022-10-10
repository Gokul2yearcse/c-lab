//Float and Double Input/Output 
#include <stdio.h>
int main() 
{ 
 float num1; 
 double num2; 
 printf("Enter a number: "); 
 scanf("%f", &num1); 
 printf("Enter another number: "); 
 scanf("%lf", &num2); 
 printf("num1 = %f\n", num1); 
 printf("num2 = %lf", num2); 
 return 0; 
}
//Enter a number: 78979.90
//Enter another number: 68689.08
//num1 = 78979.898438
//num2 = 68689.080000
//why input and output are different 
