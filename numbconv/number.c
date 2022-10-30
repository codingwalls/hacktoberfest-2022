#include <stdio.h>
int main()
{
    printf("Enter 1 for BIN TO HEX\n");
    printf("Enter 2 for BIN TO DEC\n");
    printf("ENTER 3 for HEX TO BIN\n");
    printf("ENTER 4 for DEC TO BIN\n");
    long int choice;
    long int bin;
    long int hex_c = 0;

    int dec_c = 0;
    long int i = 1;
    long int rem;
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("Enter number in binary\n");
        scanf("%ld", &bin);

        while (bin != 0)
        {
            rem = bin % 10;
            hex_c = hex_c + rem * i;
            i = i * 2;
            bin = bin / 10;
        }
        printf("Equivalent hexadecimal value: %lX", hex_c);
        return 0;
    }
    else if (choice == 2)
    {

        printf("Enter number in binary\n");
        scanf("%d", &bin);

        while (bin != 0)
        {
            rem = bin % 10;
            dec_c = dec_c + rem * i;
            i = i * 2;
            bin = bin / 10;
        }

        printf("Equivalent decimal value: %d", dec_c);
        return 0;
    }
    else if (choice == 3)
    {

        {
            char hexNum[100];
            long int count = 0;
            printf("Enter a hexadecimal number: ");
            scanf("%s", hexNum);
            printf("\n Equivalent Binary Number is : ");
            while (hexNum[count])
            {
                switch (hexNum[count])
                {
                case '0':
                    printf("0000");
                    break;
                case '1':
                    printf("0001");
                    break;
                case '2':
                    printf("0010");
                    break;
                case '3':
                    printf("0011");
                    break;
                case '4':
                    printf("0100");
                    break;
                case '5':
                    printf("0101");

                    break;
                case '6':
                    printf("0110");
                    break;
                case '7':
                    printf("0111");
                    break;
                case '8':
                    printf("1000");
                    break;
                case '9':
                    printf("1001");
                    break;
                case 'A':
                    printf("1010");
                    break;
                case 'B':
                    printf("1011");
                    break;
                case 'C':
                    printf("1100");
                    break;
                case 'D':
                    printf("1101");
                    break;
                case 'E':
                    printf("1110");
                    break;
                case 'F':
                    printf("1111");
                    break;
                case 'a':
                    printf("1010");
                    break;
                case 'b':
                    printf("1011");
                    break;
                case 'c':
                    printf("1100");
                    break;
                case 'd':
                    printf("1101");
                    break;
                case 'e':
                    printf("1110");
                    break;
                case 'f':
                    printf("1111");
                    break;

                default:
                    printf("\nInvalid Entry, Please Try Again %c", hexNum[count]);
                }
                count++;
            }
            return 0;
        }
    }
    else if (choice == 4)
    {
        int a[10], n, i;

        printf("Enter the number in decimal : ");
        scanf("%d", &n);
        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        printf("\n Equivalent Binary of Given Number is=");
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
        return 0;
    }

    else
    {

        printf("INVALID CHOICE!");
    }
}