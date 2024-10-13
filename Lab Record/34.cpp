// Program to enter a text that contains multiple lines. Display the n lines of text starting from m line

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> text;
    string line;
    int m, n;

    // Input: Entering multiple lines of text
    cout << "Enter text (type 'END' to stop input):\n";
    while (getline(cin, line)) {
        if (line == "END") break;
        text.push_back(line);
    }

    cout << "Enter starting line number (m): ";
    cin >> m;
    cout << "Enter number of lines to display (n): ";
    cin >> n;

    cout << "\nDisplaying " << n << " lines starting from line " << m << ":\n";
    for (int i = m - 1; i < m - 1 + n && i < text.size(); ++i) {
        cout << text[i] << endl;
    }

    return 0;
}
