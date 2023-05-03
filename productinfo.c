#include <stdio.h>

int main(void) 
{
    int itemNum, month, day, year;
    float unitPrice;
    
    printf("Enter item number: ");
    scanf("%d", &itemNum);
    
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%.2f\t%d/%d/%d", itemNum, unitPrice, month, day, year);

return 0;
}
