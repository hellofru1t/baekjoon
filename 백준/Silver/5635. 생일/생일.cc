#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct c_R {
    int day, month, year;
    string student;
};
int main() {
    int t;
    cin >> t;
    c_R *c = new c_R [t];
    for (int i = 0; i < t; i++)
    {
        cin >> c[i].student >> c[i].day >> c[i].month >> c[i].year;
    }
    for (int i = 0; i < t-1; i++)
    {
        for (int j = 0; j < t - 1; j++)
        {
            if (c[j].year > c[j+1].year)
                swap(c[j],c[j+1]);
            else if (c[j].year == c[j + 1].year)
            {
                if (c[j].month > c[j + 1].month)
                    swap(c[j], c[j + 1]);
                else if (c[j].month == c[j + 1].month)
                {
                    if (c[j].day > c[j + 1].day)
                        swap(c[j], c[j + 1]);
                }
            }
        }
    }
    cout << c[t-1].student <<'\n'<< c[0].student;
}