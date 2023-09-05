/* CSCI 261 A4: A4 - PPM Editor
* Author: Gordon Dina
* Skip Days Used: 1
* Skip Days Remaining: 4
* Resources used (other student):
*     / other student help fixed infinite loop when asking for ppm file by making enter variable a char instead of a int
*
*
*
* taking an ppm file and asking the user if they want to make a grey scale or invert the colors, two ppm are already in brick and wallpaper
* the 3 option for files is for the users inserted ppm file (private)
 * it will open each file and make a new ppm file out of the variables of the orginal file
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    char load;
    char imageType;
    char imageType2;
    int height;
    int width;
    int maxvalue;
    char process;
    int row1;
    int row2;
    int row3;
    int gray;

    // loop that ask user for what ppm they want to use, will repeat until valid one is chosen
    while (true) {
        cout << "Which image to load?" << endl << "  1. Brick" << endl << "  2. Wallpaper" << endl << "  3. Private" << endl;
        cout << "Enter 1, 2, or 3: ";
        cin >> load;
        cout << endl;
        if (load == '1') {
            cout << "Opening Brick.ppm file" << endl;
            break;
        }
        else if (load == '2') {
            cout << "Opening Wallpaper.ppm file" << endl;
            break;
        }
        else if (load == '3') {
            cout << "Opening Private.ppm file" << endl;
            break;
        }
        else{
            cout << "Invalid input." << endl << endl;
        }
    }

    // ask for which process should be used on said ppm file
    cout << "Which process to apply?" << endl << "  1. Grayscale" << endl << "  2. Inversion" << endl;
    cout << "Enter 1 or 2: ";
    cin >> process;

    // turning brick ppm file into greyscale
    if ((load == '1') && (process == '1')){
        cout << "Opening brick.ppm file" << endl;
        cout << "Writing brick_grayscale.ppm file";
        ifstream brickpic;
        brickpic.open("brick.ppm");
        if(brickpic.fail()) cerr << "error";
        brickpic >> imageType;
        brickpic >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            brickpic.close();
        }
        brickpic >> height;
        brickpic >> width;
        brickpic >> maxvalue;

        ofstream brickpicgray;
        brickpicgray.open("brick_grayscale.ppm");
        if(brickpicgray.fail()) cerr << "error";
        brickpicgray << imageType;
        brickpicgray << imageType2 << endl;
        brickpicgray << height;
        brickpicgray << " ";
        brickpicgray << width << endl;
        brickpicgray << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                brickpic >> row1;
                brickpic >> row2;
                brickpic >> row3;
                gray = 0.2989 * row1 + 0.5870 * row2 + 0.1140 * row3;
                row1 = gray;
                row2 = gray;
                row3 = gray;


                brickpicgray << row1 << " ";
                brickpicgray << row2 << " ";
                brickpicgray << row3 << endl;


            }

        }

        brickpicgray.close();
        brickpic.close();
    }


    // turning brick ppm file into inverted colors
    else if ((load == '1') && (process == '2')){
        cout << "Opening brick.ppm file" << endl;
        cout << "Writing brick_inverted.ppm file";
        ifstream brickpic;
        brickpic.open("brick.ppm");
        if(brickpic.fail()) cerr << "error";
        brickpic >> imageType;
        brickpic >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            brickpic.close();
        }
        brickpic >> height;
        brickpic >> width;
        brickpic >> maxvalue;

        ofstream brickpicinvert;
        brickpicinvert.open("brick_inverted.ppm");
        if(brickpicinvert.fail()) cerr << "error";
        brickpicinvert << imageType;
        brickpicinvert << imageType2 << endl;
        brickpicinvert << height;
        brickpicinvert << " ";
        brickpicinvert << width << endl;
        brickpicinvert << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                brickpic >> row1;
                brickpic >> row2;
                brickpic >> row3;
                row1 = maxvalue - row1;
                row2 = maxvalue - row2;
                row2 = maxvalue - row1;

                brickpicinvert << row1 << " ";
                brickpicinvert << row2 << " ";
                brickpicinvert << row3 << endl;


            }

        }

        brickpicinvert.close();
        brickpic.close();
    }



    // turning wallpaper ppm file into greyscale
    else if ((load == '2') && (process == '1')){
        cout << "Opening wallpaper.ppm file" << endl;
        cout << "Writing wallpaper_greyscale.ppm file";
        ifstream wallpap;
        wallpap.open("wallpaper.ppm");
        if(wallpap.fail()) cerr << "error";
        wallpap >> imageType;
        wallpap >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            wallpap.close();
        }
        wallpap >> height;
        wallpap >> width;
        wallpap >> maxvalue;

        ofstream wallpapgray;
        wallpapgray.open("wallpaper_grayscale.ppm");
        if(wallpapgray.fail()) cerr << "error";
        wallpapgray << imageType;
        wallpapgray << imageType2 << endl;
        wallpapgray << height;
        wallpapgray << " ";
        wallpapgray << width << endl;
        wallpapgray << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                wallpap >> row1;
                wallpap >> row2;
                wallpap >> row3;
                gray = 0.2989 * row1 + 0.5870 * row2 + 0.1140 * row3;
                row1 = gray;
                row2 = gray;
                row3 = gray;


                wallpapgray << row1 << " ";
                wallpapgray << row2 << " ";
                wallpapgray << row3 << endl;


            }

        }

        wallpapgray.close();
        wallpap.close();
    }


    // turning wallpaper ppm file into inverted colors
    else if ((load == '2') && (process == '2')){
        cout << "Opening wallpaper.ppm file" << endl;
        cout << "Writing wallpaper_inverted.ppm file";
        ifstream wallpap;
        wallpap.open("wallpaper.ppm");
        if(wallpap.fail()) cerr << "error";
        wallpap >> imageType;
        wallpap >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            wallpap.close();
        }
        wallpap >> height;
        wallpap >> width;
        wallpap >> maxvalue;

        ofstream wallpapinvert;
        wallpapinvert.open("wallpaper_inverted.ppm");
        if(wallpapinvert.fail()) cerr << "error";
        wallpapinvert << imageType;
        wallpapinvert << imageType2 << endl;
        wallpapinvert << height;
        wallpapinvert << " ";
        wallpapinvert << width << endl;
        wallpapinvert << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                wallpap >> row1;
                wallpap >> row2;
                wallpap >> row3;
                row1 = maxvalue - row1;
                row2 = maxvalue - row2;
                row2 = maxvalue - row1;

                wallpapinvert << row1 << " ";
                wallpapinvert << row2 << " ";
                wallpapinvert << row3 << endl;


            }

        }

        wallpapinvert.close();
        wallpap.close();
    }


    // turning Private ppm file into greyscale
    else if ((load == '3') && (process == '1')){
        cout << "Opening private.ppm file" << endl;
        cout << "Writing private_greyscale.ppm file";
        ifstream Private;
        Private.open("private.ppm");
        if(Private.fail()) cerr << "error";
        Private >> imageType;
        Private >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            Private.close();
        }
        Private >> height;
        Private >> width;
        Private >> maxvalue;

        ofstream Privategray;
        Privategray.open("private_grayscale.ppm");
        if(Privategray.fail()) cerr << "error";
        Privategray << imageType;
        Privategray << imageType2 << endl;
        Privategray << height;
        Privategray << " ";
        Privategray << width << endl;
        Privategray << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                Private >> row1;
                Private >> row2;
                Private >> row3;
                gray = 0.2989 * row1 + 0.5870 * row2 + 0.1140 * row3;
                row1 = gray;
                row2 = gray;
                row3 = gray;


                Privategray << row1 << " ";
                Privategray << row2 << " ";
                Privategray << row3 << endl;


            }

        }

        Privategray.close();
        Private.close();
    }


    // turning Private ppm file into inverted colors
    else if ((load == '3') && (process == '2')){
        cout << "Opening private.ppm file" << endl;
        cout << "Writing private_inverted.ppm file";
        ifstream Private;
        Private.open("private.ppm");
        if(Private.fail()) cerr << "error";
        Private >> imageType;
        Private >> imageType2;
        if ((imageType != 'P' ) && (imageType2 != '3' )){
            cout << "Wrong file type";
            Private.close();
        }
        Private >> height;
        Private >> width;
        Private >> maxvalue;

        ofstream Privateinvert;
        Privateinvert.open("private_inverted.ppm");
        if(Privateinvert.fail()) cerr << "error";
        Privateinvert << imageType;
        Privateinvert << imageType2 << endl;
        Privateinvert << height;
        Privateinvert << " ";
        Privateinvert << width << endl;
        Privateinvert << maxvalue << endl;

        for (int row = 0; row < width; ++row) {
            for (int col = 0; col < height; ++col) {
                Private >> row1;
                Private >> row2;
                Private >> row3;
                row1 = maxvalue - row1;
                row2 = maxvalue - row2;
                row2 = maxvalue - row1;

                Privateinvert << row1 << " ";
                Privateinvert << row2 << " ";
                Privateinvert << row3 << endl;


            }

        }

        Privateinvert.close();
        Private.close();
    }


    return 0;
}
