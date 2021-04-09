#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int f=1,l=1000000;
    while (f!=l) {
        int mid = (f + l + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char re[3];
        scanf("%s", re);
        if (strcmp(re,"<")==0)
            l=mid-1;
        else
            f=mid;
    }

    printf("! %d\n",f);
    fflush(stdout);
}
