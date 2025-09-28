/*Comsc 210 | Lab 14 | Lawrence Bryant
IDE used: Visual Studio Code*/

#include <iostream>
#include <iomanip>
using namespace std;

class Color
{
    public:
    int getRed() {return red;}
    int getBlue() {return blue;}
    int getGreen() {return green;}
    int setRed(int r) {red = r;}
    int setBlue(int b) {blue = b;}
    int setGreen(int g) {green = g;}
    void print()
    {
        cout << "";
    }

    private:
    int green;
    int red;
    int blue;

};

int main()
{

    return 0;
}