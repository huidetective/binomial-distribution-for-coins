#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


double calculate(long k) {
    return  (pow(0.5, 100) / (pow(0.8, k) * pow(0.2, 100 - k)));//这是L的公式
}

int main() {
    long k = 0;
    int count = 0;
    long long Lk = 0;
    srand((unsigned int)time(NULL));
    for (long N = 0; N < 10000; N++) {//N是进行了多少个投掷100次硬币实验
        k = 0;
        for (int i = 0; i < 100; i++) {
            int n = rand() % 10 + 1;
            if (n > 5)//这是0.5的概率，要改成0.8的话改成n>2就行
                k++;
        }
        if (k >= 80) {//把符合条件的L都加起来
            count++;
            Lk += calculate(k);
        }

    }
    //printf("%l\n", count);//N次实验中有多少次是符合要求的
    printf("%.50lf\n", Lk);
}
