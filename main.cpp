
#include <iostream>
#include "CityToVisit.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main() {
    //Create objects type CityToVisit class
    CityToVisit cityOne;
    CityToVisit cityTwo;
    CityToVisit cityThree;

    //Set name of cities
    cityOne.SetName("New York");
    cityTwo.SetName("Chicago");
    cityThree.SetName("New Orleans");

    //Set rating of cities
    cityOne.SetRating(4.5);
    cityTwo.SetRating(4.3);
    cityThree.SetRating(4.0);

    //Print data of each object
    cout << endl << " == 3 Cities to Visit in U.S. == " << endl;
    cout << " 1st" << cityOne.Print();
    cout << " 2nd" << cityTwo.Print();
    cout << " 3rd" << cityThree.Print();

    // Set description for each city
    char userChoice;
    cout  << " \"Would you like to see each city's description? Y/N :\"";
    cin >> userChoice;
    cout << endl;

    if (userChoice == 'Y') {
        cityOne.SetDescription("The City of New York, usually known as New York City, "
                               "or simply New York, is the most populous city in the United States. "
                               "With an estimated 2018 population of 8,398,748 distributed over about 302.6 square miles,"
                               " New York is also the most densely populated major city in the United States."
                               " Located at the southern tip of the U.S. state of New York, the city is the center of the New York metropolitan area,"
                               " the largest metropolitan area in the world by urban landmass. With almost 20 million people in its metropolitan"
                               " statistical area and approximately 23 million in its combined statistical area, it is one of the world's most populous megacities.");

        cityTwo.SetDescription(
                "Chicago, officially the City of Chicago, is the most populous city in the U.S. state of Illinois, "
                "and the third-most populous city in the United States, following New York City and Los Angeles. "
                "With a population of 2,746,388 in the 2020 census, it is also the most populous city in the Midwestern United States "
                "and the fifth most populous city in North America. Chicago is the county seat of Cook County, the second most populous "
                "county in the U.S., while a small portion of the city's O'Hare International Airport also extends into DuPage County."
                " Chicago is the principal city of the Chicago metropolitan area, defined as either the U.S. Census Bureau's metropolitan "
                "statistical area or the combined statistical area, often called Chicagoland. It is one of the 40 largest urban areas in the "
                "world. ");

        cityThree.SetDescription(
                "New Orleans is a consolidated city-parish located along the Mississippi River in the southeastern region of"
                " the U.S. state of Louisiana. With a population of 383,997 according to the 2020 U.S. census, it is the most populous "
                "city in Louisiana and the twelfth-most populous city in the Southeastern United States. Serving as a major port, "
                "New Orleans is considered an economic and commercial hub for the broader Gulf Coast region of the United States."
                " New Orleans is world-renowned for its distinctive music, Creole cuisine, unique dialects, and its annual celebrations "
                "and festivals, most notably Mardi Gras. The historic heart of the city is the French Quarter, known for its French and "
                "Spanish Creole architecture and vibrant nightlife along Bourbon Street. The city has been described as the \"most unique\" "
                "in the United States, owing in large part to its cross-cultural and multilingual heritage.");

        cout << " 1st). " << cityOne.Print();
        cout << " 2nd). " << cityTwo.Print();
        cout << " 3rd). " << cityThree.Print();
        cout << " Safe Travel! " << endl;
    } else if (userChoice == 'N')
    {
        cout << " Safe Travel! " << endl;
    } else
    {
        cerr << " Invalid Input " << endl;
        cout << " Safe Travel! " << endl;
    }

    return 0;
}
