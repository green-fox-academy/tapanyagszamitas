#include <stdio.h>

struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

int gold(struct Pirate pirates[], int size);
float gold_avg(struct Pirate pirates[], int size);
char *richest_wooden_legged_pirate(struct Pirate pirates[], int size);

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
int gold(struct Pirate pirates[], int size){

int gold = 0;
int i=0;
for(i=0; i <+size; i++){
gold = gold + pirates[i].gold_count;
}

return gold;

}



// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

float gold_avg(struct Pirate pirates[], int size){

int gold = 0;
int i=0;
for(i=0; i <+size; i++){
gold = gold + pirates[i].gold_count;
}

float gold_f = gold;
float size_f = size;

return gold_f/size_f;

}




// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

char *richest_wooden_legged_pirate(struct Pirate pirates[], int size) {
    int maxgold = 0, index = -1;

    for (int i = 0; i < size; i++) {
        if (pirates[i].has_wooden_leg == 1 && pirates[i].gold_count > maxgold) {
            maxgold = pirates[i].gold_count;
            index = i;
        }
    }

    return pirates[index].name;

}






int main() {
    struct Pirate pirates[] = {
        {"Jack", 0, 18},
        {"Uwe", 1, 8},
        {"Hook", 1, 12},
        {"Halloween kid", 0, 0},
        {"Sea Wolf", 1, 14},
        {"Morgan", 0, 1}
    };

printf("\nThe sum gold of the pirates is %d\n", (gold(pirates,6)));

printf("\nThe sum average gold of the pirates is %.2f\n", (gold_avg(pirates,6)));

printf("\nThe richest and wood legged pirate is %s \n", (richest_wooden_legged_pirate(pirates, 6)));

    return 0;
}
