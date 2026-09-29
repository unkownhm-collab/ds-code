#include <stdio.h>
#include <string.h>
char* reversePrefix(char* word, char ch) {
    int i, j;
    char temp;
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == ch)
            break;
    }
    if (word[i] == '\0')
        return word;
    j = 0;
    while (j < i) {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;

        j++;
        i--;
    }

    return word;
}
int main() {
    char word[] = "abcdefd";
    char ch = 'd';

    printf("%s", reversePrefix(word, ch));

    return 0;
}