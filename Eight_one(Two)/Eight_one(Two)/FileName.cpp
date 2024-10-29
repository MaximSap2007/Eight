#include <iostream>
#include <string>

std::string removeComments(const std::string& code) {
    std::string result;
    bool inLineComment = false;
    bool inBlockComment = false;

    for (size_t i = 0; i < code.length(); ++i) {
        if (inLineComment && code[i] == '\n') {
            inLineComment = false;
            result += code[i];
        }
        else if (inBlockComment && code[i] == '*' && i + 1 < code.length() && code[i + 1] == '/') {
            inBlockComment = false;
            ++i;  // Пропустити "/"
        }
        else if (inLineComment || inBlockComment) {
            continue;
        }
        else if (i + 1 < code.length() && code[i] == '/' && code[i + 1] == '/') {
            inLineComment = true;
            ++i;  // Пропустити "/"
        }
        else if (i + 1 < code.length() && code[i] == '/' && code[i + 1] == '*') {
            inBlockComment = true;
            ++i;  // Пропустити "*"
        }
        else {
            result += code[i];
        }
    }

    return result;
}

int main() {
    std::string code = R"(#include <iostream> // this is a comment
/* This is a 
multi-line 
comment */
int main() {
    std::cout << "Hello, World!"; // another comment
    return 0;
})";

    std::string codeWithoutComments = removeComments(code);
    std::cout << codeWithoutComments << std::endl;

    return 0;
}
