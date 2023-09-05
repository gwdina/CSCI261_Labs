/* CSCI 261: Assignment 8: A8 - Bubble Bobble
 *
 * Author: Gordon Dina
 * Skip Days Used: 2
 * Skip Days Remaining: 1
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // list here any outside assistance you used/received while following the
 *     // CS@Mines Collaboration Policy and the Mines Academic Code of Honor
 *
 * XXXXXXXX (MORE_COMPLETE_DESCRIPTION_HERE)
 */

#include <fstream> // for file streams (ifstream, ofstream)
#include <iostream> // for standard input/output
#include <vector> // for vector library
#include <string> // for string library
#include <cstdlib>          // for srand(), rand()
#include <ctime>            // for time()

#include <cstdlib>
#include "Bubble.h"
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace






int main() {
    //for getting the randomness of the bubbles
    srand(time(0));


    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "SFML Example Window" );

    //the vector that has the number of bubbles that will appear initanally
    vector<Bubble> balls(5);




    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color::Black );           // clear the contents of the old frame

        //loop to go through the vector to draw out the bubbbles
        for(int i =0; i < balls.size(); ++i){
            balls.at(i).updatePosition();
            window.draw(balls.at(i).getShape());

        }





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
            //will spawn a new bubble everytime the mouse is clicked
            if (event.type == Event::MouseButtonPressed){
                event.mouseButton.x;
                event.mouseButton.y;
                Bubble b;
                b.setPosition(event.mouseButton.x, event.mouseButton.y);
                balls.push_back(b);
            }
            // killer queen's 1st bomb is used, (deletes) the bubbles when the "d" is pressed
            if (event.type == Event::KeyPressed && event.key.code == Keyboard::D){
                balls.pop_back();
            }
        }
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}