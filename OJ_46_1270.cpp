//
// Created by Chieh on 2019/5/29.
//

#include<iostream>

using namespace std;

long int a[100000];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int sum = 1, max = a[0];
        for (int i = 1; i < n; ++i) {
            if (a[i] > max) sum++, max = a[i];//如果后面的数字比最大数大，sum+1
        }
        cout << sum << endl;
    }
}
