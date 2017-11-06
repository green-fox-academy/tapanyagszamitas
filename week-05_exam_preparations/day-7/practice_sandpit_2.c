#include <stdio.h>
#define CURRENT_YEAR 2017

// setting up enum for storing qualification levels
typedef enum {
    ELEMENTARY_SCHOOL, // 0
    HIGH_SCHOOL,       // 1
    BSC_DEGREE,        // 2
    MASTER_DEGREE,     // 3
    PHD                // 4
} qualification_t;

// setting up person struct to store a person's properties
typedef struct {
    char name[254];
    int birth_year;
    qualification_t qualification;
} person_t;

// takes a person struct as parameter, and prints its member elements
void person_printer(person_t person);

/* takes an array of person structs and its size
 * returns the age of the oldest person(s)
 */
int oldest_alive(person_t person_array[], int size);

/* takes parameters as follows:
 * - an array of person structs
 * - the size of this array
 * - a qualifiction type enum
 * returns an int, showing how many people has the same qualificaiton level
 * as the passed in qualification level
 */
int get_qualification_count(person_t person_array[], int size, qualification_t quali_level_to_count);

int main()
{
    // declaring persons for testing
    person_t person_anna = {"Anna", 2010, 8};
    person_t person_berta = {"Berta", 2000, BSC_DEGREE};
    person_t person_carla = {"Carla", 1900, BSC_DEGREE};
    person_t person_diana = {"Diana", 1900, PHD};
    person_t person_emily = {"Emily", 1980, PHD};

    // declaring person array for testing and initializing size
    person_t person_array[] = {person_anna, person_berta, person_carla, person_diana, person_emily};
    int size = sizeof(person_array) / sizeof(person_array[0]);

    // printing all persons for test purposes
    printf("The array of people containing the following people:\n");
    for (int i = 0; i < size; i++) {
        person_printer(person_array[i]);
    }

    // testing oldest_alive() function
    printf("\nThe oldest person(s) is(are) %d years old.\n\n", oldest_alive(person_array, size));

    // testing get_qualifiction_count() function
    printf("Number of people found with Elementary school level: %d\n",
           get_qualification_count(person_array, size, ELEMENTARY_SCHOOL));
    printf("Number of people found with Hight school level: %d\n",
           get_qualification_count(person_array, size, HIGH_SCHOOL));
    printf("Number of people found with BSC degree level level: %d\n",
           get_qualification_count(person_array, size, BSC_DEGREE));
    printf("Number of people found with Master degree level level: %d\n",
           get_qualification_count(person_array, size, MASTER_DEGREE));
    printf("Number of people found with PHD level: %d\n",
           get_qualification_count(person_array, size, PHD));

    return 0;
}

void person_printer(person_t person)
{
    printf("Name: %s\n", person.name);                  // printing a person's name
    printf("Birth year: %d\n", person.birth_year);      // printing a person's birth year

    switch (person.qualification) {                     // printing a person's qualification level
    case 0:
        printf("Qualification: elementary school\n");
        break;
    case 1:
        printf("Qualification: high school\n");
        break;
    case 2:
        printf("Qualification: bsc degree\n");
        break;
    case 3:
        printf("Qualification: master degree\n");
        break;
    case 4:
        printf("Qualification: pdh\n");
        break;
    default:
        printf("Qualification: no information\n");
    }

    printf("-----------------------------------\n");
}

int oldest_alive(person_t person_array[], int size)
{
    int age_of_person = 0;  // stores the age of currently examined person
    int age_of_oldest = 0;  // stores the age of the oldest person(s)
    int current_year = CURRENT_YEAR;

    for (int i = 0; i < size; i++) {
        age_of_person = CURRENT_YEAR - person_array[i].birth_year;
        if (age_of_person > age_of_oldest)
            age_of_oldest = age_of_person;  // age of the oldest person is updated
    }

    return age_of_oldest;
}

int get_qualification_count(person_t person_array[], int size, qualification_t quali_level_to_count)
{
    int count_of_quali_lvl_checked = 0;     // keeps track how many person has the searched qualification level

    for (int i = 0; i < size; i++) {
        if (person_array[i].qualification == quali_level_to_count)
            count_of_quali_lvl_checked++;   // counter updated if search conditions met
    }

    return count_of_quali_lvl_checked;
}
