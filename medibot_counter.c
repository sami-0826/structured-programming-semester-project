#include<stdio.h>
int main(){
    int m=6, n=4;
    int a = m+4, b = n+2;
    float total_bill, finalpay, disc_amount;

    total_bill = (a*180)+(b*220);

    float discount = 0.00;

    if (total_bill > 2500)  discount = 18.00;
    else if (total_bill >= 1200 && total_bill <= 2500) discount = 12.00;
    else discount = 6.00;

    disc_amount = total_bill * (discount/100);
    finalpay = total_bill - disc_amount;
    printf("    MediBot Smart Health Kit Billing    \n");
    printf("Digital Thermometer Strips: %d\n",a);
    printf("Glucose Test Strip Packs: %d\n",b);
    printf("Total Bill: %.2f Taka\n",total_bill);
    printf("You got %.0f%% Discount!\n",discount);
    printf("Discount Amount: %.2f Taka\n",disc_amount);
    printf("Final Payable Amount: %.2f Taka\n",finalpay);

}