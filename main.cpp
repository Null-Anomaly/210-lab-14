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
    void setRed(int r) {red = r;}
    void setBlue(int b) {blue = b;}
    void setGreen(int g) {green = g;}
    void print()
    {
        cout << "Green: " << green << " ";
        cout << "Blue: " << blue << " ";
        cout << "Red: " << red << " ";
        cout << " \n";
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
    Color three;
    Color four;
    Color five;

    one.setBlue(10);
    one.setGreen(29);
    one.setRed(199);

    two.setBlue(200);
    two.setGreen(119);
    two.setRed(24);

    three.setBlue(43);
    three.setGreen(189);
    three.setRed(203);

    four.setBlue(255);
    four.setGreen(249);
    four.setRed(255);

    five.setBlue(245);
    five.setGreen(198);
    five.setRed(74);

    one.print();
    two.print();
    three.print();
    four.print();
    five.print();

    return 0;
}