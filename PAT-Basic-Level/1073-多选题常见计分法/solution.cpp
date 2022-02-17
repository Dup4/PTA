#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
struct joy {
    int grade, num, choice, wrong[5] = {0}, max = -2, flag[5] = {0}, number;
    int tr[122] = {0};
};
void print(joy x) {
    int i;
    for (i = 0; i < 5; i++) {
        if (x.flag[i]) {
            printf("%d %d-%c\n", x.wrong[i], x.number, i + 'a');
        }
    }
}
int main() {
    int n, m, i, j, k, a, b[122] = {0}, temp, h, max = -1;
    char p, x;
    double sum = 0.0;
    struct joy list[100];
    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> list[i].grade >> list[i].num >> list[i].choice;
        list[i].number = i + 1;
        for (j = 0; j < list[i].choice; j++) {
            scanf(" %c", &p);
            // cout<<p<<endl;
            /*if(p==10){
                    break;
            }*/
            temp = p;
            list[i].tr[temp]++;
        }
    }
    int flag = 1;
    int count = 0;
    for (i = 0; i < n; i++) {
        sum = 0.0;
        for (j = 0; j < m; j++) {
            count = 0, flag = 1;      // add
            memset(b, 0, sizeof(b));  // add
            scanf(" %c %d", &x, &a);
            // cout<<a<<endl;
            for (k = 0; k < a; k++) {
                scanf(" %c", &p);
                // cout<<p<<endl;
                temp = p;
                b[temp]++;
            }
            cin >> x;  // add
            for (h = 97; h < 102; h++) {
                if (b[h] == list[j].tr[h]) {
                    if (b[h])
                        count++;
                } else if (b[h] > list[j].tr[h]) {
                    flag = 0;
                    list[j].wrong[h - 'a']++;  // replace
                } else
                    list[j].wrong[h - 'a']++;
                if (list[j].wrong[h - 'a'] > list[j].max && list[j].wrong[h - 'a'])
                    list[j].max = list[j].wrong[h - 'a'];  // add
            }
            if (list[j].max > max)
                max = list[j].max;
            // cout<<count<<endl;
            if (flag) {                         // remove
                if (count == list[j].choice) {  // choice replace num
                    sum += 1.0 * list[j].grade;
                } else {
                    sum += list[j].grade / 2.0;
                }
            }  // remove
        }
        // cout<<sum<<endl;
        /*for(j=0; j<m; j++){
        if(flag){
            if(count==list[j].num){
                    sum+=1.0*list[j].grade;
            }else{
                sum+=list[j].grade/2.0;
                }
    }
    cin>>x;
}*/
        printf("%.1f\n", sum);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < 5; j++) {
            if (list[i].wrong[j] == list[i].max)
                list[i].flag[j] = 1;
        }
    }
    flag = 1;
    for (i = 0; i < m; i++) {
        if (list[i].max == max) {
            print(list[i]);
            flag = 0;
        }
    }
    if (flag)
        cout << "Too simple\n";
}