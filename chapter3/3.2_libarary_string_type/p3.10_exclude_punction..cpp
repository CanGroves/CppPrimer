#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    string input;
    cin >> input;
    decltype(input.size()) i = 0, j = 0;
    for ( ; i < input.size() && j < input.size(); ++i, ++j) {
        while (j < input.size() && ispunct(input[j])) {
            ++j;
        }
        if (j < input.size()) {
            input[i] = input[j];
        } else {
            --i;
        }
    }
    input.resize(i);
    
    cout << input << endl;

    // exer 3.11
    const string s = "Keep out!";
    for (auto &c : s) {
        cout << c << endl;
    }
}