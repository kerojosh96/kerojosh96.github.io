#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double Fact(unsigned int n)
{
    int counter{1};
    int counter2{0};
    counter2 = n;
    double FactN{0};

    FactN = n;

    while (counter2>1)
    {
        FactN = FactN*(n-counter);
        counter = counter +1;
        counter2 = counter2 - 1;
    }
    if (n<=1)
    {
        FactN =1;
        return 1;
    }else {
    return FactN;
    }
}
double GetE(int accu)
{
    int counter1{1};//goes down in value
    counter1 = accu;
    int counter2{1};//goes up
    double ECalc{1};

    counter1 = accu;
    while (counter1>0)
    {
        ECalc = ECalc +(1/(Fact(counter2)));
        counter2 = counter2 +1;
        counter1 = counter1 -1;
    }
    return ECalc;
}
double getEtoX(int x,int NumberOfRounds)
{
    int counter1{1};//goes down
    unsigned int counter2{1};//goes up

    counter1 = NumberOfRounds;
    double EtoX;
    EtoX = 1;
    while(counter1>0)
    {
        EtoX = EtoX + ((pow(x,counter2))/(Fact(counter2)));
        counter2 = counter2 +1;
        counter1 = counter1 -1;
    }
    return EtoX;
}
int main()
{
    double a{0};
    double b{0};
    double c{0};
    cout << "how accurate would you like to display e to?(enter an integer)";
    cin>> a;
    cout << GetE(a)<<endl;
    cout <<"how accurate do you want e to the x to be calculated to?";
    cin >> b;
    cout <<"What x value do you want?";
    cin >> c;
    cout << getEtoX(c,b);
    return 0;
}
