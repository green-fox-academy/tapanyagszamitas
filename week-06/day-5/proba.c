/*
Create a classroom database. You should store the following data in a structure, called "classroom":

the name of the class
the number of seats
the lightness (from 0.0 til 10.0)
and the orientation (as a custom type, see below)
You should store the orientation type in an enumeration ("orientation") the valid types are:

NORTH
SOUTH
EAST
WEST
The persons are stored in an array.

Implement the following functions:

get_avarage_lightness()
it should return the avarage lightness all of the classrooms
orientation_count()
it should return the number of a given orientation (passed as a parameter)*/

#include <stdio.h>


typedef enum {NORTH,
              SOUTH,
              EAST,
              WEST
             } orientation_t;

typedef struct
{
    char name[30];
    int chair_nr;
    float lightness;
    orientation_t oreintation;
} classroom_t;

float get_avarage_lightness(classroom_t classroom_array[], int size);

int main()
{

    classroom_t first_a_class = {"First A", 31, 2.2, NORTH};
    classroom_t first_b_class = {"First B", 28, 9.2, SOUTH};
    classroom_t first_c_class = {"First C", 17, 3.2, EAST};
    classroom_t second_a_class = {"First A", 33, 7.2, WEST};
    classroom_t second_b_class = {"First B", 42, 2.2, NORTH};
    classroom_t second_c_class = {"First C", 27, 4.2, WEST};


    classroom_t classroom_array[]= {first_a_class, first_b_class, first_c_class, second_a_class, second_b_class, second_c_class};
    int size = sizeof(classroom_array) / sizeof(classroom_array[0]);


    printf("\n\n Average darkness is %.2f", get_avarage_lightness(classroom_array,size));

    return 0;
}

float get_avarage_lightness(classroom_t classroom_array[], int size)
{

    float sum =0;

    for(int i=0; i<=size; i++)
    {
        sum = classroom_array[i].lightness + sum;
    }
    printf("******** sum = %f", sum);

    return (sum/size);
}


