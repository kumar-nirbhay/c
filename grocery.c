#include <stdio.h>


int main()
{

    int customerid;
    int age;
    char customertype; //'R' Regular, 'T' Temporary
    int rate;
    int quantity;
    char itempurchased; // 'R' Rice, 'W' Wheat, 'S' Suger
    printf("Enter the customer id :");
    scanf("%d",&customerid);

    printf("Enter the age :");
    scanf("%d",&age);

    printf("Enter customer type: R for Regular, T Temporary:");
    scanf("%c",&customertype);

    printf("Enter rate of the item (int only):");
    scanf("%d",&rate);

    printf("Enter the item to purchase:  R for Rice, W for Wheat, S for Suger:");
    scanf("%c",&itempurchased);



    printf("Enter the quantity of purchase(int only):");
    scanf("%d",&quantity);

    int bill;
    int gst;

    bill=rate*quantity;
    gst=(5/100)*bill; //0.05

    int finalbill;

    finalbill= bill + gst;
    printf("===Final bill===");
    printf("customerid: %" &customerid)
    printf("customertype:%c" &customertype)
    printf("age:%d", &age)
    printf("Item purchased : %c",&itempurchased)
    printf("Rate: %d", &rate)
    printf("quantity: %d" &quantity)
    printf("Total GST %d" gst)
    printf("finalbill: %d",&finalbill);
    return 0;
}
