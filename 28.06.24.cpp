#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

#pragma region 1завдання
//
//
//vector<string> readUnacceptableWords(const string& filename) {
//    vector<string> words;
//    ifstream file(filename);
//    if (!file.is_open()) {
//        cerr << "Не вдалося відкрити файл: " << filename << endl;
//        return words;
//    }
//
//    string word;
//    while (file >> word) {
//        words.push_back(word);
//    }
//
//    file.close();
//    return words;
//}
//
//bool isUnacceptable(const string& word, const vector<string>& unacceptableWords) {
//    return find(unacceptableWords.begin(), unacceptableWords.end(), word) != unacceptableWords.end();
//}
//
//string removeUnacceptableWords(const string& text, const vector<string>& unacceptableWords) {
//    stringstream ss(text);
//    string word;
//    string result;
//
//    while (ss >> word) {
//        if (!isUnacceptable(word, unacceptableWords)) {
//            if (!result.empty()) {
//                result += " ";
//            }
//            result += word;
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    string inputFilename = "input.txt";
//    string unacceptableWordsFilename = "unacceptable_words.txt";
//    string outputFilename = "output.txt";
//
//    vector<string> unacceptableWords = readUnacceptableWords(unacceptableWordsFilename);
//
//    ifstream inputFile(inputFilename);
//    if (!inputFile.is_open()) {
//        cerr << "Не вдалося відкрити файл: " << inputFilename << endl;
//        return 1;
//    }
//
//    ofstream outputFile(outputFilename);
//    if (!outputFile.is_open()) {
//        cerr << "Не вдалося відкрити файл: " << outputFilename << endl;
//        return 1;
//    }
//
//    string line;
//    while (getline(inputFile, line)) {
//        string cleanedLine = removeUnacceptableWords(line, unacceptableWords);
//        outputFile << cleanedLine << endl;
//    }
//
//    inputFile.close();
//    outputFile.close();
//
//    cout << "Обробка файлу завершена. Перевірте вихідний файл: " << outputFilename << endl;
//
//    return 0;
//}
#pragma endregion

#pragma region 2завдання 



#pragma endregion

