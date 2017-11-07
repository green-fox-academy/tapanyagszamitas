#include <stdio.h>

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

struct house{
char adress[200];
int price;
int rooms;
int area;
}house_alias;

int main() {

struct house houses[]={
{"First street 1", 3000, 4, 100},
{"Second street 2", 4000, 5, 100},
{"Third street 3", 5000, 6, 200},
{"Forth street 4", 6000, 6, 300},
{"Fifth street 5", 7000, 5, 250}
};








  return 0;
}

