#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


double calculate(long k) {
    return  (pow(0.5, 100) / (pow(0.8, k) * pow(0.2, 100 - k)));//����L�Ĺ�ʽ
}

int main() {
    long k = 0;
    int count = 0;
    long long Lk = 0;
    srand((unsigned int)time(NULL));
    for (long N = 0; N < 10000; N++) {//N�ǽ����˶��ٸ�Ͷ��100��Ӳ��ʵ��
        k = 0;
        for (int i = 0; i < 100; i++) {
            int n = rand() % 10 + 1;
            if (n > 5)//����0.5�ĸ��ʣ�Ҫ�ĳ�0.8�Ļ��ĳ�n>2����
                k++;
        }
        if (k >= 80) {//�ѷ���������L��������
            count++;
            Lk += calculate(k);
        }

    }
    //printf("%l\n", count);//N��ʵ�����ж��ٴ��Ƿ���Ҫ���
    printf("%.50lf\n", Lk);
}
