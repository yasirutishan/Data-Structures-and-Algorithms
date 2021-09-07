#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int stdid, age;
    char stdname[50], city[50];
    float weight;
}em;

void insertdata()
{
    printf ("Enter the ID: ");
    scanf ("%d",&em.stdid);
    printf ("Enter the name: ");
    scanf ("%s",&em.stdname);
    printf ("Enter the age: ");
    scanf ("%d",&em.age);
    printf ("Enter the city: ");
    scanf ("%s",&em.city);
    printf ("Enter the weight: ");
    scanf ("%f",&em.weight);
}
void displaydata()
{
    printf ("\nHi %s, your ID number is %d\n",em.stdname,em.stdid);
    printf ("Age: %d\n",em.age);
    printf ("City: %s\n",em.city);
    printf ("Weight: %.2f kg",em.weight);
}

int main()
{
    insertdata();
    displaydata();
    return 0;
}
