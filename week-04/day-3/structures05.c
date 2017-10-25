#include <stdio.h>
#define MARKETPRICE 400


struct house{
char adress[50];
float price;
int room;
float area;
};

*worth_to_buy (struct house *house)
int i= 0;
for( i = 0; i < ; i.++)





int main(){

struct house first_home = {"Budapest, Kis utca 23", 40000, 3, 70};
struct house second_home = {"Budapest, Nagy utca 5", 50000, 2, 60};
struct house third_home = {"Kecskemet, Kozepes utca 17", 23000, 5, 120};
struct house fourth_home = {"Szolnok, Nagy utca 34", 17000, 3, 80};


printf("first_home adress %s, ", first_home.adress );
printf("price %.0f, ", first_home.price );
printf("room number %d, ", first_home.room );
printf("area %.0f, ", first_home.area );

return 0;
}

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
