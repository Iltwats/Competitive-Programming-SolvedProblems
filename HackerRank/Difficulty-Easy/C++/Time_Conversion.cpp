//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
//Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock.
//Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s) {
    int hours = stoi(s.substr(0,2));
    if (s[8] == 'A')
    {
        if (hours == 12) hours = 0;
    }
    else 
    {
        if (hours == 12) hours = 12;
        else hours += 12;
    }
    return ((hours < 10) ? "0" :"") + to_string(hours) + s.substr(2,6);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
