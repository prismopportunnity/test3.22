#include <stdio.h>
//烧饼有两面，要做好一个兰州烧饼，要两面都弄热。当然，一次只能弄一个的话，效率就太低了。
//有这么一个大平底锅，一次可以同时放入k个兰州烧饼，一分钟能做好一面。
//而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
int main() {
    int n;
    int k;
    int total;
    int result;

    while (scanf("%d%d", &n, &k) != EOF) {
        total = n * 2;

        if (total < k) {  //没有考虑到total<k的情况 
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