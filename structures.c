#include <stdio.h>

struct car 
{
    int year;
    char *model;
    char *plate;
    char *owner;
    int odometer;
    double engine_size;
};

typedef struct car benz;

int main(void)
{
    benz gclass;
    gclass.year = 2019;
    gclass.owner = "Michael";
    gclass.plate = "1750ja";

   printf("%s is the owner of %i G-class\n", gclass.owner, gclass.year);
}