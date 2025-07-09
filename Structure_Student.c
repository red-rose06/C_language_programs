//Take roll no and name of multiple students using structures
//Database is a collection of records. Record is a collection of attributes
//Use unique key for search operations
//For logical deletion: set the unique id to '-1'. Since, physical deletion would result in time and space complexity.
//After performing deletion operation, print all records for which unique id is not equal to -1 (using 'if' statement')
//For updating a record: ask unique id, search, if found ask for new data, copy new data into original data, display modified data
//While sorting structures: create a new structure variable 'temp'. While exchanging, using 'temp', all structure member values can be changed using a single exchange.
#include <stdio.h>
struct stud
{
    int roll;
    char name[10];
    int per;
} s[20];
void main()
{
    int n, i, j, key, f=0;
    struct stud temp;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d", i+1);
        printf("\nEnter roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter percentage: ");
        scanf("%d", &s[i].per);
    }
    printf("\nEntered details are:\n");
    for(i=0;i<n;i++)
    {
        printf("\nDetails of student %d", i+1);
        printf("\nRoll no: %d\nName: %s\nPercentage: %d\n", s[i].roll, s[i].name, s[i].per);
    }
    printf("\nEnter 1 to search a record.");
    printf("\nEnter 2 to delete record.");
    printf("\nEnter 3 to update a record.");
    printf("\nEnter 4 to display top 3 students.\n");
    scanf("%d", &key);
    switch(key)
    {
    case 1:
        printf("\nEnter roll no of student to search details: ");
        scanf("%d", &key);
        for(i=0;i<n;i++)
        {
            if(s[i].roll==key)
            {
                f=1;
                printf("\nRoll no: %d\nName: %s\nPercentage: %d\n", s[i].roll, s[i].name, s[i].per);
                break;
            }
        }
        if(f==0)
            printf("\nStudent not found.");
        break;
    case 2:
        f=0;
        printf("\nEnter roll no of student to delete details: ");
        scanf("%d", &key);
        for(i=0;i<n;i++)
        {
            if(s[i].roll==key)
            {
                f=1;
                s[i].roll = -1;
                break;
            }
        }
        if(f==0)
            printf("\nStudent not found.");
        else
        {
            printf("\nUpdated details are:\n");
            for(i=0;i<n;i++)
            {
                if(s[i].roll!=-1)
                {
                    printf("\nDetails of student %d", i+1);
                    printf("\nRoll no: %d\nName: %s\nPercentage: %d\n", s[i].roll, s[i].name, s[i].per);
                }
            }
        }
        break;
    case 3:
        printf("\nEnter the roll no of the student: ");
        scanf("%d", &key);
        for(i=0;i<n;i++)
        {
            if(s[i].roll==key)
            {
                f=1;
                printf("\nCurrent name: %s", s[i].name);
                printf("\nEnter new name: ");
                scanf("%s", s[i].name);
                printf("\nChanges saved. Updated record is: \nRoll no: %d\nName: %s\nPercentage: %d\n", s[i].roll, s[i].name, s[i].per);
            }
        }
        if(f==0)
            printf("\nStudent not found.");
        break;
    case 4:

        //Sorting the records in descending order:
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i].per<s[j].per)
                {
                    //Exchange the two
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        printf("\nThe top three students are:\n");
        for(i=0;i<3;i++)
        {
            printf("\nDetails of student %d", i+1);
            printf("\nRoll no: %d\nName: %s\nPercentage: %d\n", s[i].roll, s[i].name, s[i].per);
        }
        break;
    default:
        printf("\nIncorrect input. No such option available.");
    }
}
