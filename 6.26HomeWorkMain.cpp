#include <iostream>
# include <iomanip>
#include <cmath>
using namespace std;


double getCelsius (double f)
{
    double C{0};
    double part1;
    part1 =(f-32);
    double part2 = (9/5);
//C =(5/9)*part1;

    return part1*part2;




}



double getFahrenheit (double C)
{
    double F{0};
    double part1 = (1.8);
    double part2 = part1 * C;


    return part2 +32  ;





}

void displayGraph()
{
    int x{0};
    int y{0};
    for( int a = 0; a < 100; a = a + 1 )
    {
        cout <<x<<": F = "  <<getFahrenheit(x)<<"  "<<endl;

        x = x +1;

        if (x == 25 || x == 50 || x==75 || x==100)
        {
            cout <<"       "<<endl;
            cout <<"       "<<endl;


        }
    }


    for( int a = 32; a < 213; a = a + 1 )
    {
        cout <<y<<": C = "  <<getCelsius(y)<<"  "<<endl;
        y = a;
        y = y +1;

        if (y == 25 || y == 50 || y==75 || y==100|| y == 150 || y ==200)
        {
            cout <<"       "<<endl;
            cout <<"       "<<endl;


        }

    }
}


int main()
{
    // cout << "Hello world!" << endl;
//  cout << getCelsius(32.4)<<endl;
    //cout <<setw(3)<< getFahrenheit(40);
    displayGraph();
    return 0;
}
