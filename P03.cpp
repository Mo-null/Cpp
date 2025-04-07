#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main() {
    map<char, int> letter_counts;
    string input_text;

    cout << "Enter a text: ";
    getline(cin, input_text);

    for (char ch : input_text) {
        if (isalpha(ch)) {
            letter_counts[toupper(ch)]++;
        }
    }

    cout << "\nLetter\tCount\n";
    cout << "------\t-----\n";
    for (const auto& entry : letter_counts) {
        cout << entry.first << "\t" << entry.second << "\n";
    }

    return 0;
}
