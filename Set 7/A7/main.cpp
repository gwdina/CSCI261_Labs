/* CSCI 261 A7 - Stargate
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 3
* Resources used (office hours from Conner):
*     /
*
*   opening a text file with the cords and brightness of stars, and getting/storing the data
*   then producing an image of the stars (as circles) in a cordinate like setting, each dimmed depending on the star brightness
 *   */


#include <fstream> // for file streams (ifstream, ofstream)
#include <iostream> // for standard input/output
#include <vector> // for vector library
#include <string> // for string library
#include <cstdlib>

#include "Star.h" // contains the class used in the program



using namespace std;                            // using the standard namespace


#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    ifstream finder;                            // used for the textfile
    vector<star> starLoc;
    // only x, y, b are used the rest are used to throw away the unneeded variables
    double x;
    double y;
    double z;
    double b;
    int henignore;
    int havignore;

    //opens the text file
    finder.open("stars.txt");
    if (!finder.is_open()) {
        cout << "Could not open file stars.txt." << endl;
        return 1;
    }

    //loop that goes over the file and obtains and stores the wanted values in a vector
    while (!finder.eof()){
        finder >> x;
        finder >> y;
        finder >> z;
        finder >> b;
        finder >> henignore;
        finder >> havignore;
        star s(x, y, b);
        if ((b > 0.0) && (b < 8.0)) {
            starLoc.push_back(s);
        }
    }
    finder.close();

    // the screen size that will used, used to modify the cords
    int const WIDTH = 640;
    int const HEIGHT = 640;



    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "SFML Example Window" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color::Black );           // clear the contents of the old frame
                                                // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************

        //find the biggest brightness out of all the stars
        float maxBright = 0;
        for(int j = 0; j < 26; ++j){
            star s = starLoc.at(j);
            if(s.getBright() > maxBright){
                maxBright = s.getBright();
            }
        }
        // uses the functions in the class star to get the position of the star and the "brightness" of each star and prints an image of it in a windows
        for (int i = 0; i < starLoc.size(); ++i) {
            star s = starLoc.at(i);
            float xPixel = s.getTransformedX(WIDTH, s.getX());
            float yPixel = s.getTransformedY(HEIGHT, s.getY());

            CircleShape star;
            star.setPosition(Vector2f(xPixel, yPixel));
            star.setRadius(2);

            int shadeOfGray = s.getGrayscaleColor(s.getBright(), maxBright);
            star.setFillColor(Color(shadeOfGray, shadeOfGray, shadeOfGray));
            window.draw(star);
        }
        //****************************************
        //  ADD ALL OF OUR DRAWING ABOVE HERE
        //****************************************

        window.display();                       // display the window

        //****************************************
        // HANDLE EVENTS BELOW HERE
        //****************************************
        Event event;
        while( window.pollEvent(event) ) {      // ask the window if any events occurred
            if( event.type == Event::Closed ) { // if event type is a closed event
                                                // i.e. they clicked the X on the window
                window.close();                 // then close our window
            }
        }
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}