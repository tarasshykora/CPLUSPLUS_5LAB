#include <iostream>
#include "Header.h"
using namespace std;
#include<string>





int main()
{
    Country first("Ukraine", "Kyiv", 380, 43810000, 603.700, 200);
    first.SetType(GovernmentType::DEMOCRACY);
    first.CountryInf();
    first.CalculatePopulationDensity();
    Land Ukraine("Europe");
    PrintLand(Ukraine);

    Country second("Switzerland", "Bern", 41, 8700000, 41.285, 812.9);
    second.SetType(GovernmentType::DEMOCRACY);
    second.CountryInf();
    second.CalculatePopulationDensity();
    Land Switzerland("Europe");
    PrintLand(Switzerland);


    Country third("Japan", "Tokyo", 81, 125000000, 377.915, 4937.42);
    third.SetType(GovernmentType::DEMOCRACY);
    third.CountryInf();
    third.CalculatePopulationDensity();
    Land Japan("East Asia");
    PrintLand(Japan);


    Country fourth("Denmark", "Copenhagen", 45, 5800000, 42.951, 397.1);
    fourth.SetType(GovernmentType::MONARCHY);
    fourth.CountryInf();
    fourth.CalculatePopulationDensity();
    Land Denmark("Europe");
    PrintLand(Denmark);

    Country fifth("USA", "Washington", 1, 331900000, 983400, 23000);
    fifth.SetType(GovernmentType::REPUBLIC);
    fifth.CountryInf();
    fifth.CalculatePopulationDensity();
    Land USA("North America");
    PrintLand(USA);




    Land Sort;
    Sort.AddArray(first);
    Sort.AddArray(second);
    Sort.AddArray(third);
    Sort.AddArray(fourth);
    Sort.AddArray(fifth);

    cout << "\nSorted by GDP:" << endl;

    Sort.SortByGdp();

    cout << "\nBiggest population:" << endl;
    Sort.BiggestPopulation();

    return 0;
}
