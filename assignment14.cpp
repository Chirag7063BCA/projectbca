#include <iostream>
#include <string>

using namespace std;

class TextAnalyzer {
private:
    string* textPtr;

public:
    TextAnalyzer(const string& input) {
        textPtr = new string(input);
    }

    ~TextAnalyzer() {
        delete textPtr;
    }

    int countWords() const {
        int count = 0;
        bool inWord = false;

        for (char ch : *textPtr) {
            if (isspace(ch)) {
                inWord = false;
            } else if (!inWord) {
                count++;
                inWord = true;
            }
        }

        return count;
    }
};

int main() {
    string userInput;
    cout << "Enter a sentence: ";
    getline(cin, userInput);

    TextAnalyzer analyzer(userInput);

    cout << "Total words: " << analyzer.countWords() << endl;

    return 0;
}
