#include <stdio.h>
#include <stdlib.h>

int bill(int units)
{
    int bill, totalbill;
    if (units < 30)
    {
        bill = units*8;
    }
    else if (units < 60)
    {
        bill = (29*8) + (units-30)*15;
    }
    else if (units < 90)
    {
        bill = (29*8) + (29*15) + (units-60)*20;
    }
    else
    {
        bill = (29*8) + (29*15) + (29*20) + (units-90)*30;
    }
    totalbill = bill + 200;

    return totalbill;
}

int main()
{
    int units;
    printf ("Enter your units consumption: ");
    scanf ("%d",&units);

    printf ("\nYour bill amount: %d",bill(units));

    return 0;
}
