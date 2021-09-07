#include <stdio.h>
#include <stdlib.h>

struct product
{
    int Item_Code;
    char Item_Name[50];
    float price;
}p[3];

void insertdata()
{
    for (int i=0; i<3; i++)
    {
        printf ("Enter Item Code: ");
        scanf ("%d",&p[i].Item_Code);
        printf ("Enter Item Name: ");
        scanf ("%s",&p[i].Item_Name);
        printf ("Enter price: ");
        scanf ("%f",&p[i].price);
    }
}

void displaydata()
{
    for (int i=0; i<3; i++)
    {
        printf ("\nItem Code: \t%d \n",p[i].Item_Code);
        printf ("Item Code: \t%s \n",p[i].Item_Name);
        printf ("Item Code: \tRs. %.2f \n",p[i].price);
    }
}

int main()
{
    insertdata();
    displaydata();

    return 0;
}

