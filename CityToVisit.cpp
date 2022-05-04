//
// Created by XaveF on 5/3/2022.
//
#include <sstream>
#include "CityToVisit.h"

using std::stringstream;

void CityToVisit::SetName(const string &name)
{
    _name = name;
}

void CityToVisit::SetRating(const double &rating)
{
    _rating = rating;
}

void CityToVisit::SetDescription(const string &description) {
    _name += " Description: " + description + "\"";
}

string CityToVisit::Print()
{
    stringstream ss;
    ss << " \"City\": \"" << _name << "\", Rating: " << _rating << std::endl << std::endl;
    return ss.str();
}