#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> origin(n), target(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &origin[i]);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &target[i]);
    }
    int index = -1;
    for (int i = 1; i < n; ++i) {
        if (target[i] < target[i - 1]) {
            index = i;
            break;
        }
    }
    int flag = 0;
    for (int i = index; i < n; ++i) {
        if (target[i] != origin[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Insertion Sort\n");
        sort(target.begin(), target.begin() + index + 1);
        for (int i = 0; i < n - 1; i++) printf("%d ", target[i]);
        printf("%d\n", target[n - 1]);
    } else {
        printf("Merge Sort\n");
        int k = 1;
        while (flag) {
            flag = 0;
            if (!equal(origin.begin(), origin.end(), target.begin())) {
                flag = 1;
            }
            k *= 2;
            for (int i = 0; i < n / k; ++i) {
                sort(origin.begin() + i * k, origin.begin() + (i + 1) * k);
            }
            sort(origin.begin() + k * (n / k), origin.end());
        }
        for (int i = 0; i < n - 1; i++) printf("%d ", origin[i]);
        printf("%d\n", origin[n - 1]);
    }
}
