#include <iostream>                             // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    // display "Hello, World!" -- this still appears in our Run terminal as before
    cout << "Hello, World!" << endl;

    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(1080, 1080), "SFML Example Window" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color::White );           // clear the contents of the old frame
                                                // by setting the window to black

        // Draw a circle object called star and color it yellow


        // Draw a rectangle object called rect and color it blue
        RectangleShape rect;
        rect.setSize( Vector2f( 300, 500 ) );
        rect.setPosition( 350, 135 );
        rect.setFillColor( Color(255, 0, 0));
        window.draw( rect );

        CircleShape star;
        star.setPosition( 250, 225 );
        star.setRadius(90 );
        star.setFillColor( Color::White );
        star.setOutlineThickness( float (35) );
        star.setOutlineColor( Color::Black );
        window.draw( star);

        RectangleShape left;
        left.setSize( Vector2f( 90, 220 ) );
        left.setPosition( 350, 625 );
        left.setFillColor( Color(255, 0, 0));
        left.setOutlineThickness( float (7) );
        left.setOutlineColor( Color::Black );
        window.draw( left );

        RectangleShape right;
        right.setSize( Vector2f( 90, 220 ) );
        right.setPosition( 560, 625 );
        right.setFillColor( Color(255, 0, 0));
        right.setOutlineThickness( float (7) );
        right.setOutlineColor( Color::Black );
        window.draw( right );

        RectangleShape back;
        back.setSize( Vector2f( 100, 300 ) );
        back.setPosition( 655, 140 );
        back.setFillColor( Color(255, 0, 0));
        back.setOutlineThickness( float (7) );
        back.setOutlineColor( Color::Black );
        window.draw( back );

        // Draw a text object calledlabel
        Font myFont;
        if( !myFont.loadFromFile( "data/arial.ttf" ) )
            return -1;


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