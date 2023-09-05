/* CSCI 261: Assignment 6: A6 - Green Eggs and Ham
 *
 * Author: Gordon
 * Skip Days Used: 1
 * Skip Days Remaining: 3
 * Resources used (office hours):
 *
 *
 *
 * obtains and opens up a text file from a user, grabs that info which are the words, then counts how many there are as well the unique words
 * then counts/prints out how many unique words are there, as well the letters, and lastly the perecntage those letters occure
 */

#include "functions.h"
#include <iostream>
#include <fstream>
#include <iomanip>

string promptUserForFilename() {
    string file;
    cout << "Enter a file name: ";
    cin >> file;
    return file;
}

bool openFile(ifstream& fileIn, string filename) {
    fileIn.open(filename);
    return fileIn.is_open();
}

vector<string> readWordsFromFile(ifstream& fileIn){
    vector<string> words;
    string word;
    while(fileIn >> word){


        words.push_back(word);
    }

    return words;
}

void removePunctuation(vector<string>& allWords, string punc){
    for(int i =0; i < allWords.size(); ++i){
        for(int h =0; h < punc.size(); ++h){
            int found = allWords[i].find(punc[h]);
            if (found >= 0){
                allWords[i].erase(found);
            }
        }


    }

}

void capitalizeWords(vector<string>& allWords){

    for(int i =0; i < allWords.size(); ++i){
        for(int j =0; j < allWords[i].size(); ++j){
            if(allWords[i].at(j) >= 'a' && allWords[i].at(j) <= 'z') {
                allWords[i].at(j) = allWords[i].at(j) - 32;
            }

        }

    }

}

vector<string> filterUniqueWords(vector<string>& allWords){
    vector<string> unquiwords;
    unquiwords.push_back(allWords[0]);
    for (int i = 1; i < allWords.size(); i++){
        bool unique = true;
        for(int k = 0; k < unquiwords.size(); k++){
            if (allWords[i] == unquiwords[k]){
                unique  = false;
            }
        }
        if(unique){
            unquiwords.push_back(allWords[i]);
        }

    }



    return unquiwords;
}

vector<unsigned int> countUniqueWords(vector<string>& allWords, vector<string>& uniqueWords){
    vector<unsigned int> count;

    for(int i =0; i < uniqueWords.size(); ++i){
        int the = 0;

        for(int h =0; h < allWords.size(); ++h) {
            if (allWords[h] == uniqueWords[i]){
                ++the;
            }

        }


        count.push_back(the);

    }


    return count;
}

void sortWordsByCounts(vector<string>& uniqueWords, vector<unsigned int>& uniqueWordCounts) {
    for(int i = 0; i < uniqueWordCounts.size(); i++) {
        for(int j = i+1; j < (uniqueWordCounts.size()); j++){
            if(uniqueWordCounts[i] < uniqueWordCounts[j]) {
                int temp = uniqueWordCounts[i];
                uniqueWordCounts[i]=uniqueWordCounts[j];
                uniqueWordCounts[j]=temp;
                string yep = uniqueWords[i];
                uniqueWords[i]=uniqueWords[j];
                uniqueWords[j]=yep;
            }
            else if((uniqueWordCounts[i] == uniqueWordCounts[j]) && (uniqueWords[i] > uniqueWords[j])){

                string yep = uniqueWords[j];
                uniqueWords[j]=uniqueWords[i];
                uniqueWords[i]= yep;
            }
        }
    }

}

void printWordsAndCounts(vector<string>& uniqueWords, vector<unsigned int>& uniqueWordCounts){
    //fix spacing problem
    for(int i=0; i < uniqueWords.size(); ++i){
        cout << i +1 << setw(3) << right  << ": " << setw(8) << left << uniqueWords.at(i) << setfill(' ') << setw(3) << right  << ":" << setfill(' ') << setw(3) << right << uniqueWordCounts.at(i) << endl;
    }
    cout << endl;

}

void countLetters(vector<string>& allWords, unsigned int letterCounts[26]){

    for(int i=0; i < allWords.size(); ++i){
        int wordsize = allWords[i].size();
        for(int y=0; y < wordsize; ++y){
            if (allWords[i].at(y) == 'A'){
                letterCounts[0] += 1;
            }
            else if (allWords[i].at(y) == 'B'){
                letterCounts[1] += 1;
            }
            else if (allWords[i].at(y) == 'C'){
                letterCounts[2] += 1;
            }
            else if (allWords[i].at(y) == 'D'){
                letterCounts[3] += 1;
            }
            else if (allWords[i].at(y) == 'E'){
                letterCounts[4] += 1;
            }
            else if (allWords[i].at(y) == 'F'){
                letterCounts[5] += 1;
            }
            else if (allWords[i].at(y) == 'G'){
                letterCounts[6] += 1;
            }
            else if (allWords[i].at(y) == 'H'){
                letterCounts[7] += 1;
            }
            else if (allWords[i].at(y) == 'I'){
                letterCounts[8] += 1;
            }
            else if (allWords[i].at(y) == 'J'){
                letterCounts[9] += 1;
            }
            else if (allWords[i].at(y) == 'K'){
                letterCounts[10] += 1;
            }
            else if (allWords[i].at(y) == 'L'){
                letterCounts[11] += 1;
            }
            else if (allWords[i].at(y) == 'M'){
                letterCounts[12] += 1;
            }
            else if (allWords[i].at(y) == 'N'){
                letterCounts[13] += 1;
            }
            else if (allWords[i].at(y) == 'O'){
                letterCounts[14] += 1;
            }
            else if (allWords[i].at(y) == 'P'){
                letterCounts[15] += 1;
            }
            else if (allWords[i].at(y) == 'Q'){
                letterCounts[16] += 1;
            }
            else if (allWords[i].at(y) == 'R'){
                letterCounts[17] += 1;
            }
            else if (allWords[i].at(y) == 'S'){
                letterCounts[18] += 1;
            }
            else if (allWords[i].at(y) == 'T'){
                letterCounts[19] += 1;
            }
            else if (allWords[i].at(y) == 'U'){
                letterCounts[20] += 1;
            }
            else if (allWords[i].at(y) == 'V'){
                letterCounts[21] += 1;
            }
            else if (allWords[i].at(y) == 'W'){
                letterCounts[22] += 1;
            }
            else if (allWords[i].at(y) == 'X'){
                letterCounts[23] += 1;
            }
            else if (allWords[i].at(y) == 'Y'){
                letterCounts[24] += 1;
            }
            else if (allWords[i].at(y) == 'Z'){
                letterCounts[25] += 1;
            }
        }
    }


}

void printLetterCounts(unsigned int letterCounts[26]){
    cout << "A : " << letterCounts[0] << endl;
    cout << "B : " << letterCounts[1] << endl;
    cout << "C : " << letterCounts[2] << endl;
    cout << "D : " << letterCounts[3] << endl;
    cout << "E : " << letterCounts[4] << endl;
    cout << "F : " << letterCounts[5] << endl;
    cout << "G : " << letterCounts[6] << endl;
    cout << "H : " << letterCounts[7] << endl;
    cout << "I : " << letterCounts[8] << endl;
    cout << "J : " << letterCounts[9] << endl;
    cout << "K : " << letterCounts[10] << endl;
    cout << "L : " << letterCounts[11] << endl;
    cout << "M : " << letterCounts[12] << endl;
    cout << "N : " << letterCounts[13] << endl;
    cout << "O : " << letterCounts[14] << endl;
    cout << "P : " << letterCounts[15] << endl;
    cout << "Q : " << letterCounts[16] << endl;
    cout << "R : " << letterCounts[17] << endl;
    cout << "S : " << letterCounts[18] << endl;
    cout << "T : " << letterCounts[19] << endl;
    cout << "U : " << letterCounts[20] << endl;
    cout << "V : " << letterCounts[21] << endl;
    cout << "W : " << letterCounts[22] << endl;
    cout << "X : " << letterCounts[23] << endl;
    cout << "Y : " << letterCounts[24] << endl;
    cout << "Z : " << letterCounts[25] << endl;
    cout << endl;
}

void printMaxMinLetter(unsigned int letterCounts[26]){
    char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    float min;
    int minloc;
    for(int i = 0; i < 26; ++i){
        if(letterCounts[i] < min){
            min = letterCounts[i];
            minloc = i;
        }
    }

    float max = 0;
    int maxloc;
    for(int j = 0; j < 26; ++j){
        if(letterCounts[j] > max){
            max = letterCounts[j];
            maxloc = j;
        }
    }
    float percten = 0;
    for(int l=0; l < 26; ++l){
        percten += letterCounts[l];
    }
    float least = (min/percten) * 100;
    float most = (max/percten) * 100.0;

    cout << "Least Frequent Letter: " << alph[minloc] << fixed << setprecision(3) << showpoint << "( " << least << "%)" << endl;
    cout << "Most Frequent Letter: " << alph[maxloc] << fixed << setprecision(3) << showpoint << "( " << most << "%)";
}
