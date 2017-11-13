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

typedef enum { NO_EDUCATION, ELEMENTARY_SCHOOL, HIGHSCHOOL, BSC_DEGREE, MASTER_DEGREE, PHD} qualification_e;

typedef struct person
{
    char name[256];
    int year_of_birth;
    qualification_e quali;

} person_t;

<<<<<<< HEAD:week-06/day-3/personal ID_hedgehog.c
int get_oldest_alive(person_t plumber_masters[]);
int qualification_counter(person_t, int len);

=======
int oldest_alive( person_t plumber_masters[], int size);
int get_qualification_count(person_t plumber_masters[], int size);
>>>>>>> 4161ee82ba53d4df9baf95b7a41f7a3a02931b57:week-06/day-5/personal ID_hedgehog.c

int main()
{

    person_t abel = {"Abel", 1918, 0};
    person_t bob = {"Bob", 1921, 2};
    person_t cezar = {"Cezar", 1978, 1};
    person_t denis = {"Denis", 1962, 4};
    person_t enid = {"Enid", 1988, 0};
    person_t franz = {"Franz", 1972, 5};
    person_t georg = {"Georg", 1978, 5};
    person_t hermann = {"Hermann", 1999, 3};


    person_t plumber_masters[] = {abel, bob, cezar, denis, enid, franz, georg, hermann };
    int size = sizeof(plumber_masters) / sizeof(plumber_masters[0]);

    printf("\n\nThe oldest plumber alive is %d years old", oldest_alive(plumber_masters, size));

<<<<<<< HEAD:week-06/day-3/personal ID_hedgehog.c
    printf("\n\n The number of the qalificated plumber masters (have at last BsC in plumber science) is %d", qualification_counter(person_t, 4));
=======
    printf("\n\nThe number of masters having at least BsC is %d", get_qualification_count(plumber_masters, size));
>>>>>>> 4161ee82ba53d4df9baf95b7a41f7a3a02931b57:week-06/day-5/personal ID_hedgehog.c

    return 0;
}

int oldest_alive( person_t plumber_masters[], int size)
{

    int oldest = 0;
    for(int i=0; i<= size; i++)
    {
        //     printf(" %d",  plumber_masters[i].year_of_birth);
        if (plumber_masters[0].year_of_birth > plumber_masters[i].year_of_birth)
        {
            plumber_masters[0].year_of_birth = plumber_masters[i].year_of_birth;
        }
    }
    oldest = plumber_masters[0].year_of_birth;
    oldest= 2017-oldest;

    return oldest;
}

<<<<<<< HEAD:week-06/day-3/personal ID_hedgehog.c
int qualification_counter(person_t, int len)
=======
int get_qualification_count(person_t plumber_masters[], int size)
>>>>>>> 4161ee82ba53d4df9baf95b7a41f7a3a02931b57:week-06/day-5/personal ID_hedgehog.c
{

    int quali_count = 0;

    for(int i=0; i<= size-1; i++)
    {

        if (plumber_masters[i].quali >= 3)
        {
            quali_count++;
        }
    }

    return quali_count;
}
