#include <fstream> // for file streams (ifstream, ofstream)
#include <iostream> // for standard input/output
#include <vector> // for vector library
#include <string> // for string library
#include <cstdlib>
#include "Bubble.h"
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace






int main() {


    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "SFML Example Window" );

    Bubble anything(.02, .03);

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color::Black );           // clear the contents of the old frame

        anything.updatePosition();


        window.draw(anything.getShape());



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