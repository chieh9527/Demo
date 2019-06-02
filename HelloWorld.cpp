#include <iostream>
#include <cstring>
#include <cmath>
#include <stdio.h>

using namespace std;
#define cityNum 32
string zone[cityNum] = {"UTC", "GMT", "BST", "IST", "WET", "WEST", "CET", "CEST",
                        "EET", "EEST", "MSK", "MSD", "AST", "ADT", "NST", "NDT",
                        "EST", "EDT", "CST", "CDT", "MST", "MDT", "PST", "PDT",
                        "HST", "AKST", "AKDT", "AEST", "AEDT", "ACST", "ACDT", "AWST"};
float timeDe[cityNum] = {0, 0, 1, 1, 0, 1, 1, 2, 2, 3, 3, 4, -4, -3, -3.5, -2.5, -5, -4, -6, -5, -7, -6, -8, -7, -10,
                         -9, -8, 10, 11, 9.5, 10.5, 8};

int main() {
    int n;
    cin >> n;
    int *hour = new int[n], *minutes = new int[n];
    bool *time = new bool[n];
    float *changetime = new float[n];
    for (int i = 0; i < n; ++i) {
        char time1[20], time2[20];
        string noon = "noon", midnight = "midnight";
        cin >> time1;
        if (time1 == noon) {
            hour[i] = 12;
            minutes[i] = 0;
            time[i] = false;
        }
        else if (time1 == midnight) {
            hour[i] = 12;
            minutes[i] = 0;
            time[i] = true;
        }
        else if (time1 != noon && time1 != midnight) {
            sscanf(time1, "%d:%d", &hour[i], &minutes[i]);
            cin >> time2;
            if (time2 == "a.m.")time[i] = true;
            if (time2 == "p.m.")time[i] = false;
        }
        char city1[5], city2[5];
        cin >> city1 >> city2;
        int city1_ = 0, city2_ = 0;
        for (int j = 0; j < cityNum; ++j) {
            if (zone[j] == city1)
                city1_ = j;
            if (zone[j] == city2)
                city2_ = j;
        }
        changetime[i] = timeDe[city2_] - timeDe[city1_];
    }
    for (int i = 0; i < n; ++i) {
        float hour_ = 0, minutes_ = 0, changehour = 0, changeminutes = 0;
        if (changetime[i] < 0)
            changehour = ceil(changetime[i]);
        else if (changetime[i] > 0)
            changehour = floor(changetime[i]);
        else if (changetime[i] = 0)
            changehour = 0;
        hour_ = changehour + hour[i];
        if (changetime[i] < 0 && changetime[i] - ceil(changetime[i]) != 0)
            changeminutes = -30;
        else if (changetime[i] > 0 && changetime[i] - floor(changetime[i]) != 0)
            changeminutes = 30;
        else changeminutes = 0;
        minutes_ = minutes[i] + changeminutes;
        if (minutes_ < 0) {
            hour_ -= 1;
            minutes_ += 60;
        }
        else if (minutes_ > 60) {
            hour_ += 1;
            minutes_ -= 60;
        }
        if (hour_ < 0) {
            hour_ += 12;
            time[i] += 1;
        }
        else if (hour_ > 12) {
            hour_ -= 12;
            time[i] += 1;
        }
        if (hour_ > 12 && minutes_ == 0 && time[i] == false)
            cout << "noon" << endl;
        else if (hour_ == 12 && minutes_ == 0 && time[i] == true)
            cout << "midnight" << endl;
        else {
            cout << hour_ << ":" << minutes_;
            if (time[i] = 0)
                cout << " a.m.";
            else
                cout << " p.m.";
            cout << endl;
        }
    }
    delete[]hour;
    delete[]minutes;
    delete[]changetime;
    delete[]time;
    system("puase");
    return 0;
}