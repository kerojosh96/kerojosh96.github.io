#include <string>
#include <iostream>

class Date
{



private:

    int month;
    int day;
    int year;



public:


    Date(int Inmonth,int Inday,int Inyear)
        : month{Inmonth},day{Inday},year{Inyear} {}







    int getMonth()
    {

        return month;
    }

    int getDay()
    {

        return day;

    }
    int getYear()
    {
        return year;

    }
    int setMonth(int a)
    {
        month = a;
        return month;
    }


    int setDay(int a)
    {
        day =a;
        return day;
    }

    int setyear(int a)
    {
        year = a;
        return year;


    }
    std::string displayDateCalc(int month2,int day2,int year2)
    {
        if ((month <= 12) && (month>=1))
        {


        }
        else
        {
            month = 1;
        }





        return std::to_string (month) + "/" + std::to_string(day) + "/" + std::to_string(year);


    }

    std::string displayDate()
    {
        std::string a;
        a = displayDateCalc(month,day,year);
        return a;

    }




};

