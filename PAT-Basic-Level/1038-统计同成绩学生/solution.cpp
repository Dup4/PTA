#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int n, m, a, i, j;
    int num[100000] = {0}, list[100], joy[100] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> m;
    for (i = 0; i < m; i++) {
        cin >> list[i];
        for (j = 0; j < n; j++) {
            if (num[j] == list[i]) {
                joy[list[i]]++;
            }
        }
    }
    /*for(i=0; i<n; i++){
            for(j=0; j<m; j++){
            if(num[i]==list[j]){
                    joy[list[j]]++;
                    }
        }
    }*/
    for (i = 0; i < m - 1; i++) {
        cout << joy[list[i]] << ' ';
    }
    cout << joy[list[m - 1]] << endl;
}