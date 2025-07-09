#include<stdio.h>
struct bank
{
    long acc_no;
    float balance;
    char acc_type[15];
};
void main()
{
    struct bank user[10];
    int i, lim;
    printf("Enter number of users: ");
    scanf("%d", &lim);
    printf("Enter details: ");
    for(i=0;i<lim;i++)
    {
        printf("\nBank Account %d:\n", i+1);
        printf("Enter the account type: ");
        scanf("%s", user[i].acc_type);
        printf("Enter the account number: ");
        scanf("%d", &user[i].acc_no);
        printf("Enter the account balance: ");
        scanf("%f", &user[i].balance);
    }

    printf("\nDetails of all the Bank Accounts are:\n");
    for(i=0;i<lim;i++)
    {
        printf("\nBank Account %d:\n", i+1);
        printf("\nAccount Type: %s\nAccount Number: %d\nBalance: %f/-", user[i].acc_type, user[i].acc_no, user[i].balance);
    }
}
