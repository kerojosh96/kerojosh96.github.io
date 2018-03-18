#include <iostream>

using namespace std;

double dividoMatic2(double a, double b) // when a double is entered it is truncated
{
    int aa{0};
    int bb{0};
    int cc;
    int dd;
    aa = a;
    bb = b;
    cc = aa/bb;
    dd = aa%bb;
    cout << a << " int divided by "<<b<< "=" << cc << " with an int remainder of "<<dd<<endl;
    return dd;
}
double dividoMatic(double a, double b) // when a double is entered it is truncated
{
    int aa{0};
    int bb{0};
    int cc;
    int dd;
    aa = a;
    bb = b;
    cc = aa/bb;
    dd = aa%bb;

    return dd;
}

int calc (int a)
{
    int  counter{10};
    int z{0}; //counts number of loop rounds
    string h;
    int x = dividoMatic(a,counter);
    int y = x;
    cout << " "<< endl;
    cout << a << " backwards is ";
    while(z < 3)
    {
        if (dividoMatic(a,counter) < 9)
        {

            counter = counter * 10;
            cout << y << "  ";
            h = h + std::to_string (y);

        }
        if (dividoMatic(a,counter)> 9)
        {
            // cout << counter<< "       ";
            y = dividoMatic(a,counter)/(counter/10);

            //  h = h + std::to_string(y);
            //counter = counter * 10;
            cout << y<< "  ";
            counter = counter *10;
        }

        z = z +1;
    }
}

int main()
{
    dividoMatic2(7.1,3);
    calc(5327);

    return 0;
}
