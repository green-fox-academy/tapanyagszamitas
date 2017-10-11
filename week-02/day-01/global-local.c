#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int speed_of_sound = 340; //  [m/s]

int give_me_distance(int time)
{
    //calculate the distance between you and a lighting
    //the sound of it reaches you in 5 seconds
    //distance = time * speed_of_sound


    int distance;

    //as you can see the time and the distance is a local variable, we can only
    //access them in this function (with these values), but the speed_of_sound is a global variable
    //we can use it without any declaration
    return time * speed_of_sound;
}

int give_me_distance_in_km(int time)
{
    //calculate the distance again but this time the result
    //this time the sound reaches you in 50 seconds
    //should be in kilometers

    int divider = 1000;

    int distance;

    //here we have a third local variable called divider
return time * speed_of_sound / divider;
}

//as you can see local variable values can use the same name
//like time and distance and have a different values
//think about the given functions as well, are we usng them correctly?

int main()
{
 int time = 100; // [s]
    printf("\nthe distance between me and a lightening in meter %d ", give_me_distance(time));
    printf("\nthe distance between me and a lightening in kilometer %d ", give_me_distance_in_km(time));
	return 0;

}
