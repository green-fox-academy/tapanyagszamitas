#include <stdio.h>
#include <stdlib.h>

/* Create a personal ID registers
 * You should store the following data in a structure, called "person":
 * - the name of the person (which is shorter than 256 characters)
 * - the year of the birth (1990)
 * - the type of the highest qualification (as a custom type, see below)
 *
 * You should store the qualification type in an enumeration ("qualification"),
 * the valid types are:
 *  - elementary-school
 *  - high-school
 *  - bsc-degree
 *  - master-degree
 *  - phd
 *
 * The "person" -s are stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_alive()
 *    - it should return the age of the oldest person
 * - get_qualification_count()
 *    - it returns the count of persons which has "quali" qualification
 * For both functions you have to add the needed parameters!
 * You don't need to implement a function, which initializes the persons, just do it manually from main(). E.g. initialize your persons in main() with 4 elements in order to be able to test your 2 implemented functions if it works correctly.
 */

typedef struct person
{
    char name[256];
    int year_of_birth;
    enum qualification
    {
        elementary_school,
        high_school,
        bsc_degree,
        master_degree,
        phd
    } alias_q;
} alias_pers;

int get_oldest_alive(alias_pers plumber_masters[], int oldest);
int qualification_counter(alias_pers plumber_masters[]);


int main()
{
    struct person plumber_masters[]=
    {
        {"Abel", 1918, 1},
        {"Babel", 1921, 2},
        {"Cezar", 1978, 3},
        {"Denis", 1962, 4},
    };
    int oldest = 0;

    printf("\n\n The oldest alive plumber master is %d years old", 2017-get_oldest_alive(plumber_masters, oldest));

    printf("\n\n The number of the qalificated plumber masters (have at last BsC in plumber science) is %d", qualification_counter(plumber_masters));

    return 0;
}

int get_oldest_alive(alias_pers plumber_masters[], int oldest)
{
    for(int i=0; i<= 3; i++)
    {
        //     printf(" %d",  plumber_masters[i].year_of_birth);
        if (plumber_masters[0].year_of_birth > plumber_masters[i].year_of_birth){
            plumber_masters[0].year_of_birth =plumber_masters[i].year_of_birth;
        }
    }
    oldest = plumber_masters[0].year_of_birth;

    return oldest;
}

int qualification_counter( struct person plumber_masters[])
{

    int counter=0;

    for(int i=0; i<= 3; i++){
        if(plumber_masters[i].alias_q > 2){
            counter ++;
        }
    }
    return counter;
}
