#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int case_solver(int num1);

int main()
{
    int virtual_otp, real_otp, num1, time_zone;
    char str1[30], str2[30], date[20];

    srand(time(0));
    virtual_otp = rand() % 10000;
    printf("%d is your OTP\n", virtual_otp);
    printf("Please enter the OTP: ");
    scanf("%d", &real_otp);

    if (virtual_otp == real_otp)
    {
        printf("------------------------------WELCOME------------------------\n");
        printf("-------------------Enter your travelling details-------------\n");

        printf("\tEnter your FROM: destination: ");
        scanf("%s", str1);
        printf("\tEnter your TO: destination: ");
        scanf("%s", str2);
        printf("\tYour destination is FROM: %s ---> TO: %s\n", str1, str2);

        printf("\tPlease enter departure date in this format date/month/year: ");
        scanf("%s", date);
        printf("\tYou selected %s for departure\n", date);

        printf("\tSelect your timing\n");
        printf("*****************\n");
        printf("\tFor train in the morning ---->press 1\n");
        printf("\tFor train in the noon ------->press 2\n");
        printf("\tFor train in the evening ---->press 3\n");
        printf("\tFor train at night ------>press 4\n");
        printf("*****************\n");

        scanf("%d", &time_zone);
        switch (time_zone)
        {
        case 1:
            printf("1) GARIB RATH Train 6:05AM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 7:05AM 18035\n");
            break;
        case 2:
            printf("1) GARIB RATH Train 12:05PM 20343\n");
            break;
        case 3:
            printf("1) GARIB RATH Train 6:45PM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 7:15PM 18035\n");
            printf("3) TEZ EXPRESS Train 8:05PM 33212\n");
            break;
        case 4:
            printf("1) GARIB RATH Train 8:45PM 20343\n");
            printf("2) RAJDHANI EXPRESS Train 9:35PM 18035\n");
            printf("3) TEZ EXPRESS Train 10:15PM 33212\n");
            printf("4) AAJADI EXPRESS Train 11:25PM 08414\n");
            break;
        default:
            printf("ERROR: INVALID INPUT\n");
            return EXIT_FAILURE;
        }

        printf("\nSelect your train: ");
        scanf("%d", &num1);
        case_solver(num1);
    }
    else
    {
        printf("You have entered the wrong OTP\n");
    }

    return EXIT_SUCCESS;
}

int case_solver(int num1)
{
    int passen, booked;
    char names[30];

    switch (num1)
    {
    case 1:
        printf("\t\tYou have chosen GARIB RATH Train\n");
        break;
    case 2:
        printf("\t\tYou have chosen RAJDHANI EXPRESS Train\n");
        break;
    case 3:
        printf("\t\tYou have chosen TEZ EXPRESS Train\n");
        break;
    case 4:
        printf("\t\tYou have chosen AAJADI EXPRESS Train\n");
        break;
    default:
        printf("Please choose a valid train\n");
        int num5;
        scanf("%d", &num5);
        return case_solver(num5);
    }

    printf("\t\tEnter the number of passengers: ");
    scanf("%d", &passen);
    printf("\t\tEnter the initial names of the passengers:\n");

    for (int i = 0; i < passen; i++)
    {
        scanf("%s", names);
        srand(time(0));
        booked = rand() % 100;
        printf("\t\t%s has reserved seat number %d\n", names, booked);
    }

    printf("\t\tThank you for choosing our services!!\n");
    return 0;
}
