#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    string total = " asdaw aswedwa !sdf";
    for (auto &c : total) {
        c = 'X';
    }

    for (decltype(total.size()) i = 0; i < total.size(); ++i) {
        total[i] = 'X';
    }

    decltype(total.size()) y = 0;
    while (y < total.size()) {
        total[y] = 'X';
        y++;
    }
    
    
    cout << total << endl;
}