#include <stdio.h>
//�ձ������棬Ҫ����һ�������ձ���Ҫ���涼Ū�ȡ���Ȼ��һ��ֻ��Ūһ���Ļ���Ч�ʾ�̫���ˡ�
//����ôһ����ƽ�׹���һ�ο���ͬʱ����k�������ձ���һ����������һ�档
//��������n�������ձ���������Ҫ���ٷ��Ӳ���ȫ�������أ�
int main() {
    int n;
    int k;
    int total;
    int result;

    while (scanf("%d%d", &n, &k) != EOF) {
        total = n * 2;

        if (total < k) {  //û�п��ǵ�total<k����� 
            printf("2\n");
            continue;
        }

        result = total / k;

        if (total % k != 0)
            result++;

        printf("%d\n", result);
    }

    return 0;
}