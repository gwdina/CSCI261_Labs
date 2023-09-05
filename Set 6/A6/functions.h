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

#ifndef A6_FUNCTIONS_H
#define A6_FUNCTIONS_H

#include <string>
#include <vector>
#include <fstream>
using namespace std;

/** @brief obtains file name from user
 * @desc returns the name that the user gave
 * @param nothing
 * @return file name
 */
string promptUserForFilename();

/** @brief opens the file
 * @desc it takes the file that was given and opens it
 * @param fileIn, the ifstream  used for accessing the file
 * @param filename, file to be opened
 * @return file is open
 */
bool openFile(ifstream& fileIn, string filename);

/** @brief grabs words from text file and puts it in a vector
 * @desc a while loop is used to grab the words from the file and puts in the vector
 * @param fileIn, grabs data from the file
 * @return vector words that contain the words from the file
 */
vector<string> readWordsFromFile(ifstream& fileIn);

/** @brief remove punctuations from the words
 * @desc does two loops: one to go through each word in the vector, the other checks if that word contains a punctuation and then erases it
 * @param allWords, vector that contains the words
 * @param punc, a string that has every punctuation
 * @return gives back the vector without the punctuations on the words
 */
void removePunctuation(vector<string>& allWords, string punc);

/** @brief capitalizes the words
 * @desc does two loops: one to go through each word in the vector, the other goes through each charcacter in each word and capitalizes
 * @param allWords, vector that contains the words
 * @return gives back the vector but the words are capitalized
 */
void capitalizeWords(vector<string>& allWords);

/** @brief finds the unique words in the allWords vector and puts it in another vector
 * @desc two loops: first goes through each word in allwords, the second finds out if a word already in the unique vector if not then its added to the vector
 * @param allWords, vector that contains the words
 * @return a vector of the unique words
 */
vector<string> filterUniqueWords(vector<string>& allWords);

/** @brief counts how many times the unique word appears
 * @desc two loops are uesd: one to go over each word, the other checks if it oocurs in the all allWords vector and counts how many times it occurs. then adds that total to the vector
 * @param allWords, vector that contains the words
 * @param uniqueWords, vector that contains the unique words
 * @return vector of number of time each unique word occurs
 */
vector<unsigned int> countUniqueWords(vector<string>& allWords, vector<string>& uniqueWords);

/** @brief sorts the vectors by the number of times each word occurs from greatest to least
 * @desc two loops are used: first is used to go over each vairble in each vector, the second does the same thing but orginaizes each vector. sorts the counts vector by greatest to least, and the word vector by the same as count vector but if some words are the same they are orded by alpablety
 * @param uniqueWords, vector that contains the unique words
 * @param uniqueWordCounts, vector that contains the number of times the unique words occurs
 * @return the uniqueWords and uniqueWordCounts, but in order from greatest to least occurence as well alphabatly if it occures twice
 */
void sortWordsByCounts(vector<string>& uniqueWords, vector<unsigned int>& uniqueWordCounts);

/** @brief prints out column of each word and the number of times it has occcured
 * @desc a loop that prints out each word and number from their vectors and are spaced orccorily
 * @param uniqueWords, vector that contains the unique words
 * @param uniqueWordCounts, vector that contains the number of times the unique words occurs
 * @return prints out column of words and the number of occureneces
 */
void printWordsAndCounts(vector<string>& uniqueWords, vector<unsigned int>& uniqueWordCounts);

/** @brief counts amount of letters found in each word
 * @desc a loop that goes through each word, then grabs the length of each word, then runs a loop that checks each character in the word and if that character is the same as a letter then its added to the postion array
 * @param allWords, vector that contains the words
 * @param letterCounts[26], number of letters that occure
 * @return array letterCounts[26] that contains each number of letter occureneces
 */
void countLetters(vector<string>& allWords, unsigned int letterCounts[26]);

/** @brief gives the letter and how many times it occurs
 * @desc prints out each letter starting with A and its number of occureneces
 * @param letterCounts[26], number of letters that occure
 * @return prints out column of letters and its number of occureneces
 */
void printLetterCounts(unsigned int letterCounts[26]);

/** @brief finds the most and least frequent letter and finds its percentage of occurences
 * @desc two loops: one to the find the most occured letter and the other find the least occured letter, both loops find its position in the alphablet. Calulates each perenctage then prints out results
 * @param letterCounts[26], number of letters that occure
 * @return the most and least letter and its percentage of occurence
 */
void printMaxMinLetter(unsigned int letterCounts[26]);

#endif //A6_FUNCTIONS_H

