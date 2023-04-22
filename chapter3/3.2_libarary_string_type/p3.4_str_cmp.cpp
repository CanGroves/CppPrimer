#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    string input1, input2;
    cin >> input1 >> input2;
    if (input1 != input2) {
        cout << (input1 > input2 ? input1 : input2) << endl;
    } else {
        cout << input1 << " == " << input2 << endl;
    }
    if (input1.size() != input2.size()) {
        cout << (input1.size() > input2.size() ? input1 : input2) << endl;
    } else {
        cout << "size of " << input1 << " == " << input2 << endl;
    }
}