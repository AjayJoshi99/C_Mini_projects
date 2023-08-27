#include <stdio.h>
#include <stdlib.h>
#include<time.h>


// function decleration
void addsstudent();
void studentrecord();
void searchstudent();
void delete ();

// structure
struct student
{
    char fname[20];
    char lname[20];
    int rollno;
    char class[10];
    char vill[20];
    float per;
};

void main()

{
    int choice;

    while (choice != 5)
    {       system("cls");
        printf("\t\t\t=====STUDENT DATABASE MANAGEMENT SYSTEM======");
        printf("\n\n\n\t\t\t\t        1. add student\n");
        printf("\t\t\t\t        2. student record\n");
        printf("\t\t\t\t        3. search student\n");
        printf("\t\t\t\t        4. delete stedent\n");
        printf("\t\t\t\t        5. Exit\n");
        printf("\t\t\t\t   ---------------------------\n");
        printf("\t\t\t\t      ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            addsstudent();
            system("cls");
            break;
        case 2:
            
            system("cls");
            studentrecord();
            printf("\t\t\t\t pressany key to exit.........\n");
            system("cls");
            break;
        case 3:
            system("cls");
            fflush(stdin);
            searchstudent();
            printf("\t\t\t\t pressany key to exit.........\n");
            system("cls");
            break;
        case 4:
            system("cls");
            delete();
            printf("\t\t\t\t pressany key to exit.........\n");
            system("cls");
            break;
        case 5:
            system("cls");
            printf("\n\t\t\t\tTHANK YOU FOR USED THIS SOFTWARE.\n\n");
            exit(0);
            break;

        default:
            system("cls");
            printf("\n\t\t\tenter a valid number\n\n");
            printf("\t\t\t\tpress ant key to continue.......");
            system("cls");
            break;
        }
    }
    
}

// function definathions

void addsstudent()
{
    char another;
    FILE *fp;

    struct student info;

    do
    {
        system("cls");

        printf("\t\t\t\t===========Add Students info=========\n\n\n");
        fp = fopen("hi.txt", "a");

        printf("\n\t\t\tenter first name        :");
        scanf("%s", &info.fname);
        printf("\n\t\t\tenter last name        :");
        scanf("%s", &info.lname);
        printf("\n\t\t\tenter roll no          :");
        scanf("%d", &info.rollno);
        printf("\n\t\t\tenter cource           :");
        scanf("%s", &info.class);
        printf("\n\t\t\tenter address          :");
        scanf("%s", &info.vill);
        printf("\n\t\t\tenter percentage       :");
        scanf("%f", &info.per);

        printf("\n\t\t\t\t_________________________\n");

        if (fp == NULL)
        {
            fprintf(stderr, "cannot open file");
        }
        else
        {
            printf("\t\t\trecord stored successfuly\n");
        }

        fwrite(&info, sizeof(struct student), 1, fp);
        fclose(fp);

        printf("\t\t\tyou want to add another record?(y/n)  : ");
        fflush(stdin);
        scanf("%c", &another);

    }

    while (another == 'y' || another == 'Y');
}

void studentrecord()
{
    FILE *fp;

    struct student info;
    fp = fopen("hi.txt", "rb");

    printf("\t\t\t\t=====Student record========\n\n\n");

    if (fp == NULL)
    {
        printf(stderr, "cannot open file\n");
        exit(0);
    }
    else
    {
        printf("\t\t\t\tRecords  :\n");
        printf("\t\t\t\t___________________________________\n\n");
    }
    
    while (fread(&info, sizeof(struct student), 1, fp))
    {
        printf("\n\t\t\t Student name      : %s %s", info.fname, info.lname);
        printf("\n\t\t\t roll no           : %d", info.rollno);
        printf("\n\t\t\t class             : %s", info.class);
        printf("\n\t\t\t village           : %s", info.vill);
        printf("\n\t\t\t precentage        : %f", info.per);
        printf("\n\t\t\t _______________________________\n");
    }
    sleep(5);
    fclose(fp);
}

void searchstudent()
{

    struct student info;
    FILE *fp;
    int roll, found = 0;

    fp = fopen("hi.txt", "r");

    printf("\t\t\t\t======SEARCH STUDENT RECORD=====\n\n\n");
    printf("\t\t\tEnter the roll no   : ");
    
    scanf("%d", &roll);
    
    while (fread(&info, sizeof(struct student), 1, fp) > 0)
    {  fflush(stdin);
        if (info.rollno == roll)
        {
            found = 1;
            printf("\n\n\t\tStudent name : %s %s", info.fname, info.lname);
            printf("\n\t\t\t roll no           : %d", info.rollno);
            printf("\n\t\t\t class             : %s", info.class);
            printf("\n\t\t\t village           : %s", info.vill);
            printf("\n\t\t\t precentage        : %f", info.per);
            printf("\n\t\t\t _______________________________\n");
        }
    }
    

    if (!found)
    {
        printf("record not found");
    }
    sleep(5);
    fclose(fp);
}

void delete ()
{

    struct student info;
    FILE *fp, *fp1;
    int roll, found = 0;

    printf("\t\t\t\t=====DELETE STUDENT RECORD=====\n\n\n");

    fp = fopen("hi.txt", "rb");
    fp1 = fopen("temp.txt", "w");
    printf("\t\t\t\tenter roll no  : ");
    scanf("%d", &roll);
    if (fp == NULL)
    {
        fprintf(stderr, "cannot open file\n");
        exit(0);
    }
    while (fread(&info, sizeof(struct student), 1, fp))
    {
        if (info.rollno == roll)
        {
            found = 1;
        }
        else
        {
            fwrite(&info, sizeof(struct student), 1, fp);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (!found)
    {
        printf("\n\t\t\t\trecord not found\n");
    }
    if (found)
    {
        remove("hi.txt");
        rename("temp.txt", "hi.txt");
        printf("\n\t\t\t\tRecord deleted succesfully\n");
    }
    sleep(5);
}
