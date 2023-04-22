#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    string input1, total;
    while (cin >> input1) {
        //total += input1;
        // also can work: total += input1 + " ";
        total = total + input1 + " ";
    }
    cout << total << endl;
}