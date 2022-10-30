#include <stdio.h>
int main()
{

    int choice;
    int f;
    int c;
    int c_c;
    int c_f;
    printf("Enter choice\n");
    printf("Enter 1 for F to C conversion\n");
    printf("Enter 2 for C to F conversion\n");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("Enter temperature in F\n");
        scanf("%d", &f);
        printf("Converted temperature in C\n");
        c_c = ((f - 32) * 5) / 9;
        printf("%d", c_c);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in C\n");
        scanf("%d", &c);
        printf("Converted temperature in F\n");
        c_f = ((9 / 5) * c) + 32;
        printf("%d", c_f);
    }
    else
    {
        printf("INVALID CHOICE!");
    }
}