//
// Created by Chieh on 2019/5/30.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b, c;
    for (int i = 0; i < n; ++i) {
        getchar();
        getline(cin, a);
        getline(cin, b);
        bool flag = true;//用于标记字符串是否相等。
        int p = static_cast<int>(a.length()), q = static_cast<int>(b.length());
        while (p--) {
            if (a[p] != ' ') {
                while (q--) {
                    if (b[q] != ' ') break;
                }
                if (((a[p] >= 'A' && a[p] <= 'Z') || (a[p] >= 'a' && a[p] <= 'z')) &&//当都是字母的时候
                    ((b[q] >= 'A' && b[q] <= 'Z') || (b[q] >= 'a' && b[q] <= 'z'))) {
                    if (a[p] != b[q] && a[p] - 32 != b[q] && a[p] != b[q] - 32) flag = false;
                } else {//不是字母的时候
                    if (a[p] != b[q]) flag = false;
                }
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
