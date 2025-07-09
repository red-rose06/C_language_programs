/**
Structure is a datatype in which you can store data of different datatypes.
Syntax for declaring a Structure:
struct stud
{
    int rno;
    char nm[10];
} s;

stud is the name of the structure
rno and nm[] are structure members
s is the structure variable
members can be accessed in main() using the variable using the '.' operator.
Eg: s.rno
Eg: scanf("%s", &s.nm);
Structure is declared before(outside) main

Used in file handling.
Combine structure and array to handle large data.
This done by making the structure variable an array.
For each structure variable, there will be the respective number of structure member copies.

Example:
struct stud
{
    int rno;
    char nm[10];
} s[100];
Inside main():
n = no of students
for(i=0;i<n;i++)
{
    scanf("%d", &s[i].rno);
    scanf("%d", s[i].nm);
}
*/
//Write a small program which has three structure members
//Program that takes the bank account details of a user.
#include <stdio.h>
struct acc
{
    char name[12];
    long acc_no, bal;
} str[20];

void main()
{
    int n, i;
    printf("Enter number of customers: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nSerial Number: %d\n", i+1);
        printf("\nEnter the first name of the account holder: ");
        scanf("%s", &str[i].name);
        printf("Enter the account number: ");
        scanf("%d", &str[i].acc_no);
        printf("Enter the balance: ");
        scanf("%d", &str[i].bal);
    }
    printf("\nData collected:");
    for(i=0;i<n;i++)
    {
        printf("\n\nSerial Number: %d\n", i+1);
        printf("\nThe entered details are: \nName: %s\nAccount No: %d\nBalance: %d/-", str[i].name, str[i].acc_no, str[i].bal);
    }
}
