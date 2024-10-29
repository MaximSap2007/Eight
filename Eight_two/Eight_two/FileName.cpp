#include <iostream>
#include <string>
using namespace std;

string wrapOccurrences(const string& str, const string& substr) {
    string result;
    size_t pos = 0;
    size_t start = 0;

    while ((pos = str.find(substr, start)) != string::npos) {
        result += str.substr(start, pos - start);
        result += "(" + substr + ")";
        start = pos + substr.length();
    }
    result += str.substr(start);

    return result;
}

int main() {
    string str, substr;
    cout << "Input the main string: ";
    cin >> str;
    cout << "Input the substring to wrap: ";
    cin >> substr;

    string wrappedStr = wrapOccurrences(str, substr);
    cout << wrappedStr << endl;

    return 0;
}
