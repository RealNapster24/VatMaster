#include <stdio.h>
    int VATvalue;
    double amount;
    double VAT;
    double result1;
    double result2;
    int choice;
int main (){
  
    //Enter the value of the VAT amount
    printf("Enter VAT amount:\n");

   //Check if amount is format correct
   while ((scanf("%lf",&amount))!=1)
    {
        printf("VAT amount is wrong enter it again:\n");
        //buffer cleaner
        int c;
        while ((c = getchar())!= '\n' && c != EOF)
        {
        
        }
    }
    
    //Enter the VAT value
    printf("Enter the VAT percentage by entering the number:\n");

    //Check if VAT value is format correct
    while ((scanf("%i",&VATvalue))!=1)
    {
        printf("VAT is wrong enter it again:\n");
        //buffer cleaner
        int c;
        while ((c = getchar())!= '\n' && c != EOF)
        {

        }
    }

    //Calculating VAT
    VAT = (amount * VATvalue) / 100;
    
    //The user chooses whether to remove or add VAT
    printf("Press 1 to remove Vat\nPress 2 to add Vat\n");

    //Check if choice is format correct
    while ((scanf("%i",&choice))!=1 || (choice != 1 && choice != 2))
    {
        printf("The choice made is incorrect,\nPress 1 to remove Vat\nPress 2 to add Vat\n");
        //buffer cleaner
        int c;
        while ((c = getchar())!= '\n' && c != EOF)
        {

        }
    }

    //Calculating result 1 and result2
    if (choice == 1)
        {
            result1 = amount - VAT;
            printf("The amount excluding VAT is: %0.1lf\n", result1);
        }
    else if (choice == 2)
        {
            result2 = amount + VAT;
            printf("The amount including VAT is: %0.1lf\n", result2);
        }
    printf("Press enter to exit");    
    getchar();
    getchar();
}
