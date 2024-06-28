#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>
#include <unordered_map>

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

unordered_map<char, string> createTransliterationMap() {
    unordered_map<char, string> transliterationMap;
    transliterationMap['А'] = "A";  transliterationMap['а'] = "a";
    transliterationMap['Б'] = "B";  transliterationMap['б'] = "b";
    transliterationMap['В'] = "V";  transliterationMap['в'] = "v";
    transliterationMap['Г'] = "H";  transliterationMap['г'] = "h";
    transliterationMap['Ґ'] = "G";  transliterationMap['ґ'] = "g";
    transliterationMap['Д'] = "D";  transliterationMap['д'] = "d";
    transliterationMap['Е'] = "E";  transliterationMap['е'] = "e";
    transliterationMap['Є'] = "Ye"; transliterationMap['є'] = "ie";
    transliterationMap['Ж'] = "Zh"; transliterationMap['ж'] = "zh";
    transliterationMap['З'] = "Z";  transliterationMap['з'] = "z";
    transliterationMap['И'] = "Y";  transliterationMap['и'] = "y";
    transliterationMap['І'] = "I";  transliterationMap['і'] = "i";
    transliterationMap['Ї'] = "Yi"; transliterationMap['ї'] = "i";
    transliterationMap['Й'] = "Y";  transliterationMap['й'] = "i";
    transliterationMap['К'] = "K";  transliterationMap['к'] = "k";
    transliterationMap['Л'] = "L";  transliterationMap['л'] = "l";
    transliterationMap['М'] = "M";  transliterationMap['м'] = "m";
    transliterationMap['Н'] = "N";  transliterationMap['н'] = "n";
    transliterationMap['О'] = "O";  transliterationMap['о'] = "o";
    transliterationMap['П'] = "P";  transliterationMap['п'] = "p";
    transliterationMap['Р'] = "R";  transliterationMap['р'] = "r";
    transliterationMap['С'] = "S";  transliterationMap['с'] = "s";
    transliterationMap['Т'] = "T";  transliterationMap['т'] = "t";
    transliterationMap['У'] = "U";  transliterationMap['у'] = "u";
    transliterationMap['Ф'] = "F";  transliterationMap['ф'] = "f";
    transliterationMap['Х'] = "Kh"; transliterationMap['х'] = "kh";
    transliterationMap['Ц'] = "Ts"; transliterationMap['ц'] = "ts";
    transliterationMap['Ч'] = "Ch"; transliterationMap['ч'] = "ch";
    transliterationMap['Ш'] = "Sh"; transliterationMap['ш'] = "sh";
    transliterationMap['Щ'] = "Shch"; transliterationMap['щ'] = "shch";
    transliterationMap['Ю'] = "Yu"; transliterationMap['ю'] = "iu";
    transliterationMap['Я'] = "Ya"; transliterationMap['я'] = "ia";
    transliterationMap['ь'] = ""; 
    transliterationMap['’'] = ""; 
    return transliterationMap;
}

string transliterate(const string& text, const unordered_map<char, string>& transliterationMap) {
    string result;
    for (char c : text) {
        if (transliterationMap.find(c) != transliterationMap.end()) {
            result += transliterationMap.at(c);
        }
        else {
            result += c;
        }
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    unordered_map<char, string> transliterationMap = createTransliterationMap();

    ifstream inputFile(inputFilename);
    if (!inputFile.is_open()) {
        cerr << "Не вдалося відкрити файл: " << inputFilename << endl;
        return 1;
    }

    ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        cerr << "Не вдалося відкрити файл: " << outputFilename << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        string transliteratedLine = transliterate(line, transliterationMap);
        outputFile << transliteratedLine << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Транслітерація завершена. Перевірте вихідний файл: " << outputFilename << endl;

    return 0;
}


#pragma endregion

