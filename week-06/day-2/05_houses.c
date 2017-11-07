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

struct house
{
    char adress[200];
    int price;
    int rooms;
    int area;
} house_alias;

char *houses_good_price(struct house houses[], int marketprice);

int main()
{
    int marketprice = 400;

    struct house houses[] =
    {
        {"First street 1", 30000, 4, 50},
        {"Second street 2", 40000, 5, 110},
        {"Third street 3", 50000, 6, 200},
        {"Forth street 4", 60000, 6, 325},
        {"Fifth street 5", 70000, 5, 150}
    };

    for(int i =0; i <=4; i++){
        printf("\n %s \t%d \t%d \t%d", houses[i].adress,houses[i].price, houses[i].rooms, houses[i].area);
    }

    houses_good_price(houses, marketprice);

    return 0;
}

char *houses_good_price(struct house houses[], int marketprice)
{
    int number_of_houses = 5;
    int count = 0;
    for(int i = 0; i <= number_of_houses-1; i++){
        if((houses[i].price / houses[i].area ) <= marketprice){
            printf("\n\nit's a good buy : %s \t%d \t%d \t%d", houses[i].adress,houses[i].price, houses[i].rooms, houses[i].area);
            count ++;
        }
    }
    printf("\n\nThe number of good priced houses is (are) = %d\n", count);
}
