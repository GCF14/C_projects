#include <stdio.h>
#define TAX 0.12
#define TIP1 0.15
#define TIP2 0.18
#define TIP3 0.20
#define AMOUNT 99.00

float computeTotal(int nOrders)
{
    float fTotal;

    return fTotal = nOrders * AMOUNT;
}

float computeGross(float fTotal) 
{
    return fTotal / (1 + TAX);
}

float computeTax (float fTotal)
{
    float fGross = computeGross (fTotal);
    return fTotal - fGross;
}

void displayDivider(void)
{
    printf("%s%s%s%s", "-----------", "-----------", "-----------", "-----------");
}

void displayHeader(void)
{
    printf("%24s\n", "MyKitchen");
    printf("%28s\n", "Taft Avenue, Manila");
    printf("%25s\n", "Your Receipt");
}

void displayEnd(void)
{
    printf("%29s\n", "Thank you very much!");
    printf("%26s\n", "See you again!");
}

void displayDetails(float nOrders, float fGross, float fTax, float fPrice)
{
    printf("Fried Chix Rice\n");
    printf("    %d x 99.00", nOrders);

    fPrice = computeTotal (nOrders);
    printf("\t\tTotal price = %.2f\n", fPrice);
    displayDivider();
    printf("\n");

    printf("Total   %d item(s)", nOrders);
    fGross = computeGross(fPrice);
    printf("\tGross price = %.2f\n", fGross);

    fTax = computeTax(fPrice);
    printf("Sales Tax\t\t\t       %.2f\n", fTax);
    displayDivider();
    printf("\n");
    printf("Grand Total\t\t\t      %.2f", fPrice);

    printf("\n\n\n");
    printf("Tip Guide:\n");
    printf("15%% = %.2f\t 18%% = %.2f\t 20%% = %.2f", fGross * 0.15, fGross * 0.18, fGross * 0.2);
}

int main (void)
{

    int month, day, year, nOrders;
    float fPrice, fGross, fTax;

    displayHeader();
    printf("\n\n\n\n");

    printf("Date(month/day/year): ");
    scanf("%d/%d/%d", &month, &day, &year);
    displayDivider();
    printf("\n");

    printf("Orders: ");
    scanf("%d", &nOrders);

    displayDetails(nOrders, fGross, fTax, fPrice);

    printf("\n\n\n");
    displayEnd();


    return 0;
}