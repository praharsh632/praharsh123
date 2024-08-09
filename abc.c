#include<stdio.h>
int addition(int, int);
int difference(int, int);
int product(int, int);
float division(int, int);
int main()
{
int a, b, c, d, e, f;
printf("Enter a : ");
scanf("%d", &a);
printf("Enter b : ");
scanf("%d", &b);
printf("Addition is : %d\n", addition(a, b));
printf("Difference is : %d\n", difference(a, b));
printf("Product is : %d\n", product(a, b));
printf("Division is : %g\n", division(a, b));
}
int addition(int a, int b)
{
return (a + b);
}
int difference(int a, int b)
{
return (a - b);
}
int product(int a, int b)
{
return (a * b);
}
float division(int a, int b)
{
return ((float)a / (float)b);
}
