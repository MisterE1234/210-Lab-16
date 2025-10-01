//COMSC-210|Lab-16|Ethan Aylard
//IDE: Visual Studio Code
// This program demonstrates the use of classes, setter, and getter member functions along with constructors so that it can keep track of Color Objects

#include <iostream>
using namespace std;

class Color {
private:
//Private member variables
    string name;
    int red;
    int green;
    int blue;
public:
    // getter and setter member functions
    //getter functions:
    string getName() const { return name; }
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }
    //setter functions:
        //setName function to set the name of the color
        //It requires a string parameter and returns nothing
        void setName(string n) { name = n; }

        //setRGB function to set the RGB values of the color
        //It requires three integer parameters and returns nothing
        void setRGB (int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }

    //Default constructor
        Color() {
            name = "none";
            red = 0;
            green = 0;
            blue = 0;
        };

    //partial constructor
    Color(string n) {
        name = n;
        red = 0;
        green = 0;
        blue = 0;
    };

    //full parameter constructor
    Color(string n, int r, int g, int b) {
        name = n;
        red = r;
        green = g;
        blue = b;
    };

    //Print function
    void print() {
        cout << name << ":\n ";
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

int main() {
    // Create Color objects
    //Incomplete Color objects
    Color colorB; // Default constructor for black
    Color colorCR("Crimson Red"); // Partial constructor for crimson red

    // Full parameter constructor for Colors colorLG and colorW with all values set
    Color colorLG("Lime Green", 50, 205, 50); // Full parameter constructor for lime green
    Color colorW("White", 255, 255, 255); // Full parameter constructor for white

    // Set name for colorB as the values are set to 0 by default
    colorB.setName("Black");

    // Set the RGB values for colorCR as the name is set but RGB values are set to 0 by default
    
    colorCR.setRGB(220, 20, 60);

    //Displaying all the reds of each color
    cout << "Red values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getRed() << endl;
    cout << colorCR.getName() << ": " << colorCR.getRed() << endl;
    cout << colorLG.getName() << ": " << colorLG.getRed() << endl;
    cout << colorW.getName() << ": " << colorW.getRed() << endl;
    cout << endl;

    //Displaying all the greens of each color
    cout << "Green values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getGreen() << endl;
    cout << colorCR.getName() << ": " << colorCR.getGreen() << endl;
    cout << colorLG.getName() << ": " << colorLG.getGreen() << endl;
    cout << colorW.getName() << ": " << colorW.getGreen() << endl;
    cout << endl;

    //Displaying all the blues of each color
    cout << "Blue values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getBlue() << endl;
    cout << colorCR.getName() << ": " << colorCR.getBlue() << endl;
    cout << colorLG.getName() << ": " << colorLG.getBlue() << endl;
    cout << colorW.getName() << ": " << colorW.getBlue() << endl;
    cout << endl;


    // Print the colors
    colorB.print();
    cout << endl;
    colorCR.print();
    cout << endl;
    colorLG.print();
    cout << endl;
    colorW.print();
    cout << endl;

    return 0;
}