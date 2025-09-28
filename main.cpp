/*Comsc 210 | Lab 14 | Lawrence Bryant
IDE used: Visual Studio Code*/

#include <iostream>
#include <iomanip>
using namespace std;

//The class for Color including Getters and setters for each rgb.
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
        cout << "Green: " << green;
        cout << "Blue: " << blue;
        cout << "Red: " << red;
        cout << "\n";
    }

    private:
    int green;
    int red;
    int blue;

};

//Program main
int main()
{
    Color one;
    Color two;

    return 0;
}