#include <stdio.h>
#include <ctype.h>
int main() {
char c;
printf("Enter a character(not a word): ");
scanf("%c", &c);
if (isalpha(c)!=0)
printf("%c is an alphabet.", c);

else
printf("%c is not an alphabet.", c);
return 0;
}