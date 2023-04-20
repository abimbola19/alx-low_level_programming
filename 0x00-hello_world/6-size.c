#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
*/
int main(void)
{
char sex;
int age;
long int accountBal;
long long int mya;
float interestRate;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(sex));
printf("Size of an in int: %lu byte(s)\n", (unsigned long)sizeof(age));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(accountBal));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(mya));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(interestRate));
return (0);
}
