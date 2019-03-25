#include <iostream>
using namespace std;

int mss_n3(int *data, int len) {
    int sum = 0, max = INT32_MIN;
    // 选择头i
    for (int i = 0; i < len; i++) {
        // 选择尾j
        for (int j = i; j < len; j++) {
            sum = 0;
            // 计算此序列和
            for (int k = i; k <= j; k++) {
                sum += data[k];
            }
            if (sum > max) {
                max = sum;
            }
        }
    }
    return max;
}

int mss_n2(int *data, int len) {
    int sum, max = INT32_MIN;
    // 选择头i
    for (int i = 0; i < len; i++) {
        sum = 0;
        for (int j = i; j < len; j++) {
            sum += data[j];
            if (sum > max) {
                max = sum;
            }
        }
    }
    return max;
}

int mss_n(int *data, int len) {
    
}

int main() {
    int data[] = {-1, 11, -4, 13, -5, -2};
    cout << "tag" << endl;
    cout << mss_n3(data, sizeof(data)/sizeof(int)) << endl;
    cout << mss_n2(data, sizeof(data)/sizeof(int)) << endl;
    return 0;
}