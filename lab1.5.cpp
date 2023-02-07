#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') {
        cout << c << " is a vowel.";
    }
    else {
        cout << c << " is not a vowel.";
    }
    
    return 0;
}
