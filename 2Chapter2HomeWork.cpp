#include <iostream>

using namespace std;
int twoPoint18()
{
    double a{0};
    double b{0};

    cout <<"Enter a number";
    cin >> a;
    cout << "enter another number";
    cin >> b;
    cout << "sum ("<<a+b<<") Product ("<< a*b <<") difference ("<< a-b <<") quotient (" << a/b<<")"<<endl;
    return 0;
}
int twoPoint20()
{
    int rad;
    cout << "enter a radius ";
    cin >> rad;
    float pi = 3.14159;
    cout <<"diameter ="<< 2 * rad<<endl;
    cout <<"circumference =" << 2 *pi*rad<<endl;
    cout <<"area=" <<pi*(rad*rad)<<endl;

}
int twoPoint30()
{

    double kilo{0};
    double meter{0};
    double bmi{0};
    cout <<"enter Weight in kilo's:";
    cin >> kilo;
    cout <<"enter Height in meter's:";
    cin >> meter;

    cout << "Your BMI is "<< kilo/(meter*meter)<<endl;
    cout << " "<<endl;
    cout <<"Underweight: less than 18.5" <<endl;
    cout <<"Normal: between 18.5 and 24.9"<<endl;
    cout << "Overweight: between 25 and 29.9"<<endl;
    cout << "Obese: 30 or greater"<<endl;
}

int main()
{
    twoPoint30();
    twoPoint18();
    twoPoint20();

}

