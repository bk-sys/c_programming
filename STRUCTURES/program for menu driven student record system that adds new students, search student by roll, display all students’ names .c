#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    float cgpa;
};

int main()
{
    struct student s[10];
    int count = 0, choice;
    int search, found;

    do
    {
        printf("\n======= STUDENT RECORD MENU =======\n");
        printf("1. Add New Student\n");
        printf("2. Search Student by Roll\n");
        printf("3. Display All Students\n");
        printf("4. EXIT\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            if(count == 10)
            {
                printf("Student storage full!\n");
            }
            else
            {
                printf("Enter Name: ");
                scanf("%s", s[count].name);

                printf("Enter Roll Number: ");
                scanf("%d", &s[count].roll);

                printf("Enter CGPA: ");
                scanf("%f", &s[count].cgpa);

                count++;
                printf("Student added successfully!\n");
            }
            break;

        case 2:
            found = 0;

            printf("Enter roll to search: ");
            scanf("%d", &search);

            for(int i = 0; i < count; i++)
            {
                if(s[i].roll == search)
                {
                    printf("\nStudent Found!\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Roll: %d\n", s[i].roll);
                    printf("CGPA: %.2f\n", s[i].cgpa);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Student not found!\n");

            break;

        case 3:
            if(count == 0)
            {
                printf("No records available!\n");
            }
            else
            {
                printf("\n----- Student List -----\n");
                for(int i = 0; i < count; i++)
                {
                    printf("\nName: %s", s[i].name);
                    printf("\nRoll: %d", s[i].roll);
                    printf("\nCGPA: %.2f\n", s[i].cgpa);
                }
            }
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}



