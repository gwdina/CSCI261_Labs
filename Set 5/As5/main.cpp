/* CSCI 261 A5: Wavefront OBJ File Validator
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 4
* Resources used ():
*     /
*
*
* taking a obj file then first collect its data: comments, verties, and faces. then check if that data is vaild: no dups or out of range in the faces
 * . If the file is vaild then ask the user what info they would like to see: comments, the vertcies , or faces.
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
struct Vertex {
    float x;
    float y;
    float z;

};

struct Face {
    int v1;
    int v2;
    int v3;

};

int main() {
    string filename;
    ifstream file;

    string comment;

    char lineType;

    int com = 0;
    int vert = 0;
    int fac = 0;




    vector <Vertex> vertices(100);
    vector <Face> faces(100);
    vector <string> comments;




    // obtains file and grabs data for later
    cout << "Enter the name of the file to open: ";
    cin >> filename;
    file.open(filename);
    while (file.eof() == false){
        file >> lineType;

        if (lineType == '#') {
            getline(file, comment);
            comments.push_back(comment);
            ++com;
        }
        else if (lineType == 'v') {
            Vertex p;
            Vertex q;
            Vertex r;
            file >> vertices.at(vert).x;
            file >> vertices.at(vert).y;
            file >> vertices.at(vert).z;
            ++vert;
        }
        else if (lineType == 'f') {
            Face l;
            Face m;
            Face n;
            file >> faces.at(fac).v1;;
            file >> faces.at(fac).v2;
            file >> faces.at(fac).v3;
            ++fac;
        }

    }




    // prints out how many comments, vertices, and faces
    cout << "Read in" << endl;

    cout << setfill(' ') << setw(9) <<  com << " comments" << endl;

    cout << setfill(' ') << setw(9) << vert << " vertices" << endl;
    fac = fac - 1;
    cout << setfill(' ') << setw(9) << fac << " faces";

    cout << endl << "Validating faces..." << endl;




    //checks if the file is valid or not: if the faces are dups or out of range then it's counted, if there is a least 1 invalid then the file is invalid
    int faceCheck_dup = 1;
    int faceCheck_range = 1;
    int invaild = 0;

    for (int rande = 0; rande < fac; ++rande){

        if ((faces.at(rande).v1 != faces.at(rande).v2) && (faces.at(rande).v1 != faces.at(rande).v3) && (faces.at(rande).v2 != faces.at(rande).v3)) {
            ++faceCheck_dup;

        }
        else {
            cout << setfill(' ') << setw(13) << "Face " << faceCheck_dup << " has duplicate indices" << endl;
            ++invaild;
            ++faceCheck_dup;
        }

        if ((faces.at(rande).v1 <= vert) && (faces.at(rande).v2 <= vert) && (faces.at(rande).v3 <= vert)) {
            ++faceCheck_range;
        }
        else {
            cout << setfill(' ') << setw(13) << "Face " << faceCheck_range << " contains vertices out of range" << endl;
            ++invaild;
            ++faceCheck_range;
        }

    }
    //closes file and tells us if it vaild or not
    file.close();
    if (invaild >= 1){
        cout << "File is invalid.";
    }

    else if (invaild == 0){
        cout << "File is valid!" << endl;
    }

    cout << endl;


    //asks user what info they want to see and prints it, will keep asking user until they want to exit
    int wish = 0;
    while (wish != 4){
        cout << "What do you wish to do?" << endl;
        cout << setfill(' ') << setw(25) << "1) Print comments" << endl;
        cout << setfill(' ') << setw(25) << "2) Print vertices" << endl;
        cout << setfill(' ') << setw(22) << "3) Print faces" << endl;
        cout << setfill(' ') << setw(15) << "4) Quit" << endl;
        cout << "Choice: ";
        cin >> wish;

        if(wish == 1){
            for(int jj=0; jj < com ; ++jj){
                cout << "Comment #" << jj + 1 << ": " << comments.at(jj) << endl;
            }
        cout << endl;
        }

        if(wish == 2){
            for(int jj=0; jj < vert; ++jj){

                cout << "Vertex #" << jj + 1 << ": (" << vertices.at(jj).x << ", " << vertices.at(jj).y << ", " << vertices.at(jj).z << ")" << endl;
            }
        cout << endl;
        }

        if(wish == 3){
            for(int jj=0; jj < fac; ++jj){
                cout << "Face #" << jj + 1 << ":" << setfill(' ') << setw(5) <<  " (" << vertices.at(faces.at(jj).v1 - 1).x << ", " << vertices.at(faces.at(jj).v1 - 1).y << ", " << vertices.at(faces.at(jj).v1 - 1).z << ")";
                cout << setfill(' ') << setw(5) << " (" << vertices.at(faces.at(jj).v2 - 1).x << ", " << vertices.at(faces.at(jj).v2 - 1).y << ", " << vertices.at(faces.at(jj).v2 - 1).z << ")";
                cout << setfill(' ') << setw(5) << " (" << vertices.at(faces.at(jj).v3 - 1).x << ", " << vertices.at(faces.at(jj).v3 - 1).y << ", " << vertices.at(faces.at(jj).v3 - 1).z << ")" << endl;
            }
        cout << endl << endl;
        }
    }


    if (wish == 4){
        cout << "Goodbye!";
    }




    return 0;
}
