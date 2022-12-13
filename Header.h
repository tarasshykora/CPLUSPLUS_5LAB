#pragma once
#include <iostream>
#include <string>
using namespace std;

enum governmentType
{
    DEMOCRACY,
    REPUBLIC,
    AUTOCRACY,
    OLIGARCHY,
    ARISTOCRACY,
    MONARCHY
};


class Country
{
private:
    string name;
    string capital;
    float area;
    int code;
    governmentType Type;

public:
    float gdp;
    int population;

    Country()
    {
    }

    Country(string name, string capital, int code, int population, float area, float gdp)
    {
        this->name = name;
        this->capital = capital;
        this->code = code;
        this->population = population;
        this->area = area;
        this->gdp = gdp;
    }

    string getName()
    {
        return name;
    }

    string getCapital()
    {
        return capital;

    }

    int getCode()
    {
        return code;
    }

    float getArea()
    {
        return area;
    }

    governmentType getType()
    {
        return Type;
    }

    void setType(governmentType Type) {
        this->Type = Type;
    }

    void CountryInf()
    {
        cout << "\nName of country: " << name << "\nCapital: " << capital << "\nPhone code: " << code << "\nPopulation: " << population << "\nArea: " << area << "\nGDP(billions): " << gdp << endl;
    }

    void ñalculatePopulationDensity()
    {
        int a = population;
        float b = area;
        float c = a / b;
        cout << "Population density: " << c << endl;
    }

    ~Country()
    {

    }

};


class Land
{
public:
    string name;

    Land()
    {

    }

    Land(string name)
    {
        this->name = name;
    }

    friend void PrintLand(Land& object);



    Country normarray[100];
    Country sortarray[1];
    int numberelements = 0;

    void AddArray(Country number) {
        normarray[numberelements] = number;
        numberelements++;
    }

    void SortByGdp() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (normarray[j].gdp < normarray[j + 1].gdp) {
                    sortarray[0] = normarray[j + 1];
                    normarray[j + 1] = normarray[j];
                    normarray[j] = sortarray[0];
                }
            }
        }

        for (int i = 0; i < numberelements; i++) {
            normarray[i].CountryInf();
        }
    }

    void BiggestPopulation() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (normarray[j].population < normarray[j + 1].population) {
                    sortarray[0] = normarray[j + 1];
                    normarray[j + 1] = normarray[j];
                    normarray[j] = sortarray[0];

                }
            }
        }
        normarray[0].CountryInf();
    }

    ~Land()
    {

    }
};

void PrintLand(Land& object)
{
    cout << "Land: " << object.name << endl;
}
