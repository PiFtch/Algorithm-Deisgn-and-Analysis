#include <iostream>
using namespace std;

int *previous_larger(int data[], int len) {
    int *p = new int[len];
    for (int i = 0; i < len; i++) {
        int j = i - 1;
        while (j >= 0 && data[j] <= data[i]) {
            j--;
        }
        p[i] = j;
    }
    return p;
}

int *improved_previous_lager(int data[], int len) {
    int *p = new int[len];
    for (int i = 0; i < len; i++)  {
        p[i] = i - 1;
        int k = i;
        while (k >= 0 && data[k] <= data[i])
            k = p[k];
        p[i] = k;
    }
    return p;
}

int main() {
    int data[] = {6, 5, 4, 5, 3, 1};
    int data2[] = {1,2,3,4,5,6};
    int *p = previous_larger(data2, sizeof(data)/sizeof(int));
    int *p1 = improved_previous_lager(data2, sizeof(data)/sizeof(int));
    for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
        cout << p1[i] << ' ';
    }
    return 0;
}