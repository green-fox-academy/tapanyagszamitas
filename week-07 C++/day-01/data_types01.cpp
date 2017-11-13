#include <iostream>
#include <iomanip>
using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
int workhours_a_days = 6;
int workdays_a_week =5;
int semester_weeks = 17;

cout << "A greenfox attende is taking "<< workhours_a_days * workdays_a_week * semester_weeks << " hours with coding."<< endl;

float percentige_of_work = (float) (workhours_a_days * workdays_a_week)/52*100;

cout << "Tis is a "<< setprecision(12)<< percentige_of_work  << " % of a normal working programmer."<< endl;



    return 0;
}
