#include <iostream>
 
using namespace std;
void topWidth(int topW)
{
 
    int w;
    w = topW;
    while(w>0)
    {
 
        w--;
 
        cout <<"#";
 
 
    }
    cout<<endl;
}
 
void height(int input)
{
    for(int a = input; a>2; a = a -1)
    {
 
 
        cout <<"#";
        int H1;
        H1 = input;
        while(H1>2)
        {
            H1--;
            cout<<" ";
        }
 
        cout <<"#"<<endl;
 
    }
}
 
int comp(int a)
{
    if(a !=1)
    {
        topWidth(a);
        height(a);
        topWidth(a);
    }
    else
    {
        topWidth(a);
    }
 
}
int main()
{
    comp(5);
}
