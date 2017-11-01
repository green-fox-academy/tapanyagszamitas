#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

void car_print(struct Car karcsi ){
printf("type %d \n", karcsi.type);
printf("km %.2f \n", karcsi.km);

if(karcsi.type!= TESLA)
    printf(" gas %.2f \n", karcsi.gas);

}



// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {

struct Car volvo ={VOLVO, 4000, 20};
struct Car toyota ={TOYOTA, 6700, 15};
struct Car land_rover ={LAND_ROVER, 4300, 7};
struct Car tesla ={TESLA, 8800, 6};

car_print(tesla);


  return 0;
}
