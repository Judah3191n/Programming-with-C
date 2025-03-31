#include<stdio.h>
 
int main() {
    //Task 1 - Currency Converter
    printf("Task 1 - Currency Converter");
    double exchangeRate = .70;
    double CADToUSD = 0;
    printf("\nCurrent CAD to USD exchange rate: %.2lf\n",exchangeRate);
    printf("Enter amount in CAD: ");
    scanf("%lf", &CADToUSD);
    printf("Equivalent in USD: $%.2lf\n", CADToUSD*exchangeRate);

    //Task 2 - Dicount Calculator for Online Shopping
    printf("\nTask 2 - Dicount Calculator for Online Shopping");
    double amount;
    printf("\nEnter total purchase amount: ");
    scanf("%lf", &amount);


    double discount = 0;

    if(amount>=100){
        discount = 1.1;
    } else if((amount<100)&&(amount>50)){
        discount = 1.05;
    } else {
        discount = 1.0;
    }

    printf("Discount applied: %.0lf%%\n", (discount-1)*100);
    printf("Final amount to pay: $%.2lf", amount-(discount*amount-amount));

}