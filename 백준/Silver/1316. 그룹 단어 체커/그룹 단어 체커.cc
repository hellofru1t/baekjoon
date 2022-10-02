#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int i, j, k;
    int n, len,ans;
    ans = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char word[101];
        char word2[101];
        int num = 0;
        int index = 0;
        scanf("%s", word);
        len = strlen(word);
        for (j = 0; j <= len; j++) {
            if (word[j] != word[j - 1]) {
                word2[index] = word[j];
                index++;
            }
        }
        for (j = 1; j < index; j++) {
            for (k = 0; k<j; k++){
                if ( word2[j] == word2[k]) num++;
            }
        }

        if (!num) ans++;
    }
    printf("%d", ans);
}
