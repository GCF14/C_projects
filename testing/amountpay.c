#include <stdio.h>

int thousand(int n, int *Thousand)
{
    int n1 = n / 1000;
    *Thousand = n % 1000;
    return n1;
}

int five_hundred(int *FiveHundred, int *Thousand)
{
    int n1 = *Thousand / 500;
    *FiveHundred = *Thousand % 500;
    return n1;
}

int two_hundred(int *FiveHundred, int *TwoHundred)
{
    int n1 = *FiveHundred / 200;
    *TwoHundred = *FiveHundred % 200;
    return n1;
}

int one_hundred(int *TwoHundred, int *Onehundred)
{
    int n1 = *TwoHundred / 100;
    *Onehundred = *TwoHundred % 100;
    return n1;
}

int fifty(int *Onehundred, int *Fifty)
{
    int n1 = *Onehundred / 50;
    *Fifty = *Onehundred % 50;
    return n1;
}

int twenty(int *Fifty, int *Twenty)
{
    int n1 = *Fifty / 20;
    *Twenty = *Fifty % 20;
    return n1;
}

int ten(int *Twenty, int *Ten)
{
    int n1 = *Twenty / 10;
    *Ten = *Twenty % 10;
    return n1;
}

int five(int *Ten, int *Five)
{
    int n1 = *Ten / 5;
    *Five = *Ten % 5;
    return n1;
}

int one(int *Five, int *One)
{
    int n1 = *Five / 1;
    *One = *Five % 1;
    return n1;
}

int main(void)
{
    int n, Thousand, FiveHundred, TwoHundred, Onehundred, Fifty, Twenty, Ten, Five, One;

    printf("Enter amount of money (PHP): ");
    scanf("%d", &n);

    printf("₱1000: %d\n", thousand(n, &Thousand));
    printf("₱500: %d\n", five_hundred(&FiveHundred, &Thousand));
    printf("₱200: %d\n", two_hundred(&FiveHundred, &TwoHundred));
    printf("₱100: %d\n", one_hundred(&TwoHundred, &Onehundred));
    printf("₱50: %d\n", fifty(&Onehundred, &Fifty));
    printf("₱20: %d\n", twenty(&Fifty, &Twenty));
    printf("₱10: %d\n", ten(&Twenty, &Ten));
    printf("₱5: %d\n", five(&Ten, &Five));
    printf("₱1: %d\n", one(&Five, &One));

    return 0;
}