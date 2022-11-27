#include<stdio.h>

int wynik=0; int a; int b; int c;

void Dodawanie()
{wynik=a+b;}

void Odejmowanie()
{wynik=a-b;}

void Dzielenie()
{wynik=a/b;}

void Mnozenie()
{wynik=a*b;}

int main(void)
{

printf ("Hello, please write first number:\n");
scanf ("%d", &a);

printf ("Please write second number:\n"); 
scanf ("%d", &b);

printf ("Please choose what to do:\n");
printf ("1. Addition.\n");
printf ("2. Substraction.\n");
printf ("3. Division.\n");
printf ("4. Multiplication.\n");

scanf ("%d", &c);

switch (c)
{
    case 1: Dodawanie(); break;
    case 2: Odejmowanie(); break;
    case 3: Dzielenie(); break;
    case 4: Mnozenie(); break;
}
printf ("Wynik to:%d\n", wynik);
        }
