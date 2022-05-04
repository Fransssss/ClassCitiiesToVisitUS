//
// Created by XaveF on 5/3/2022.
//

#ifndef CLASSCITIIESTOVISITUS_CITYTOVISIT_H
#define CLASSCITIIESTOVISITUS_CITYTOVISIT_H

#include <iostream>

using std::string;

class CityToVisit
{
private:
    string _name;
    double _rating;
public:
    void SetName(const string& name);
    void SetRating(const double& rating);
    void SetDescription(const string& desciption);
    string Print();
};


#endif //CLASSCITIIESTOVISITUS_CITYTOVISIT_H
