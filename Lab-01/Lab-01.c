#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
struct
{
    int ids[SIZE];
    int marks1[SIZE];
    int marks2[SIZE];
    int marks3[SIZE];
    int total[SIZE];
}class1;

int main()
{
    int subtotal = 0, max=0,maxID;

    for (int i=0; i<SIZE; i++)
    {
        printf ("Enter the student ID of student %d: ",i+1);
        scanf ("%d",&class1.ids[i]);
        printf ("Enter the marks for Test 1: ");
        scanf ("%d",&class1.marks1[i]);
        if (class1.marks1[i]<101 && class1.marks1[i]>-1)
        {
            printf ("Enter the marks for Test 2: ");
            scanf ("%d",&class1.marks2[i]);
            if (class1.marks2[i]<101 && class1.marks2[i]>-1)
            {
                printf ("Enter the marks for Test 3: ");
                scanf ("%d",&class1.marks3[i]);
                if (class1.marks3[i]<101 && class1.marks3[i]>-1)
                {
                    class1.total[i] = class1.marks1[i]+class1.marks2[i]+class1.marks3[i];
                }
                else
                {
                    printf ("Please enter a mark between 0 - 100 \n");
                    printf ("Enter the marks for Test 3: ");
                    scanf ("%d",&class1.marks3[i]);
                }
            }
            else
            {
                printf ("Please enter a mark between 0 - 100 \n");
                printf ("Enter the marks for Test 3: ");
                scanf ("%d",&class1.marks3[i]);
                if (class1.marks3[i]<101 && class1.marks3[i]>-1)
                {
                    class1.total[i] = class1.marks1[i]+class1.marks2[i]+class1.marks3[i];
                }
                else
                {
                    printf ("Please enter a mark between 0 - 100 \n");
                    printf ("Enter the marks for Test 3: ");
                    scanf ("%d",&class1.marks3[i]);
                }
            }
        }
        else
        {
            printf ("Please enter a mark between 0 - 100 \n");
            printf ("Enter the marks for Test 1: ");
            scanf ("%d",&class1.marks1[i]);
            if (class1.marks1[i]<101 && class1.marks1[i]>-1)
            {
                printf ("Enter the marks for Test 2: ");
                scanf ("%d",&class1.marks2[i]);
                if (class1.marks2[i]<101 && class1.marks2[i]>-1)
                {
                    printf ("Enter the marks for Test 3: ");
                    scanf ("%d",&class1.marks3[i]);
                    if (class1.marks3[i]<101 && class1.marks3[i]>-1)
                    {
                        class1.total[i] = class1.marks1[i]+class1.marks2[i]+class1.marks3[i];
                    }
                    else
                    {
                        printf ("Please enter a mark between 0 - 100 \n");
                        printf ("Enter the marks for Test 3: ");
                        scanf ("%d",&class1.marks3[i]);
                    }
                }
                else
                {
                    printf ("Please enter a mark between 0 - 100 \n");
                    printf ("Enter the marks for Test 3: ");
                    scanf ("%d",&class1.marks3[i]);
                    if (class1.marks3[i]<101 && class1.marks3[i]>-1)
                    {
                        class1.total[i] = class1.marks1[i]+class1.marks2[i]+class1.marks3[i];
                    }
                    else
                    {
                        printf ("Please enter a mark between 0 - 100 \n");
                        printf ("Enter the marks for Test 3: ");
                        scanf ("%d",&class1.marks3[i]);
                    }
                }
            }
        }
        printf ("\n");
    }

    for (int i=0; i<SIZE; i++)
    {
        subtotal = subtotal+class1.total[i];
        if (max<class1.total[i])
        {
            max=class1.total[i];
            maxID = i+1;
        }
    }
    for (int i=0; i<SIZE; i++)
    {
        printf ("Student ID: %d\n",class1.ids[i]);
        printf ("Total Marks: %d\n\n",class1.total[i]);
    }
    float average = subtotal/SIZE;
    printf ("Average of the class: %.2f\n\n",average);

    printf ("Student with highest Marks: %d\n\n",maxID);

    return 0;
}
