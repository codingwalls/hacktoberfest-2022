#include <stdio.h>
int main()
{
    int choice;
    float inr;
    float usd_c;
    float inr_c;
    float usd;
    float aed_c;
    float aed;

    printf("Enter 1 for INR TO USD\n");
    printf("Enter 2 for USD TO INR\n");
    printf("ENTER 3 for INR TO AED\n");
    printf("ENTER 4 for AED TO INR\n");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("Enter currency in INR\n");
        scanf("%f", &inr);
        usd_c = (1 / 77.53) * inr;
        printf("Converted currency in USD:\n");
        printf("%0.2f", usd_c);
    }
    else if (choice == 2)
    {
        printf("Enter currency in USD\n");
        scanf("%f", &usd);
        inr_c = (77.53) * usd;
        printf("Converted currency in INR\n");
        printf("%0.2f", inr_c);
    }
    else if (choice == 3)
    {
        printf("Enter currency in INR\n");
        scanf("%f", &inr);
        aed_c = (1 / 21.10) * inr;
        printf("Converted currency in AED\n");
        printf("%0.3f", aed_c);
    }
    else if (choice == 4)
    {
        printf("Enter currency in AED\n");
        scanf("%f", &aed);
        inr_c = (21.10) * aed;
        printf("Converted currency in INR\n");
        printf("%0.3f", inr_c);
    }
    else
    {
        printf("INVALID CHOICE!");
    }
}