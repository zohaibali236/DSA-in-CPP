#include <iostream>
using namespace std;

const int secs_in_hour = 3600;
const int secs_in_min = 60;

int main()
{
    cout << "Enter Time in seconds = ";
    int input;
    cin >> input;

    int h, m, s;

    h = input/secs_in_hour;
    m = (input%secs_in_hour)/secs_in_min;
    s = (input%secs_in_hour)%secs_in_min;

    cout << input << " Seconds is " << h << " hrs : " << m << " mins : " << s << " sec" << endl;

    return 0;
}