#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string read_string(string message) {
    string syntax;
    cout << message;
    getline(cin, syntax);
    return syntax;
}

string replace_wordM(string syntax, string rword, string nword) {
    string word, newstr;
    int pos = 0;

    while ((pos = syntax.find(" ")) != string::npos) {
        word = syntax.substr(0, pos);
        if (word == rword) {
            word = nword;
        }
        newstr += word + " ";
        syntax.erase(0, pos + 1);
    }

    if (syntax == rword) {
        syntax = nword;
    }
    newstr += syntax;
    return newstr;
}

string replace_word(string syntax, string rword, string nword) {
    string word, newstr;
    int pos = 0;

    string rword_lower = rword;
    transform(rword_lower.begin(), rword_lower.end(), rword_lower.begin(), ::tolower);

    while ((pos = syntax.find(" ")) != string::npos) {
        word = syntax.substr(0, pos);
        
        string word_lower = word;
        transform(word_lower.begin(), word_lower.end(), word_lower.begin(), ::tolower);

        if (word_lower == rword_lower) {
            word = nword;
        }

        newstr += word + " ";
        syntax.erase(0, pos + 1);
    }

    string syntax_lower = syntax;
    transform(syntax_lower.begin(), syntax_lower.end(), syntax_lower.begin(), ::tolower);
    if (syntax_lower == rword_lower) {
        syntax = nword;
    }
    newstr += syntax;

    return newstr;
}

int main() {
    string syntax, rword, nword;
    syntax = read_string("Enter the syntax: ");
    rword = read_string("Enter the word you want to replace: ");
    nword = read_string("Enter the new word: ");

    cout << "Replace with match case: " << replace_wordM(syntax, rword, nword) << endl;
    cout << "Replace ignoring case: " << replace_word(syntax, rword, nword) << endl;

}
