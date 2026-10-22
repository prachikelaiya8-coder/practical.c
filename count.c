#include <stdio.h>

void countVowels(char sentence[]) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; sentence[j] != '\0'; j++) {
        if (sentence[j] == 'a' || sentence[j] == 'A')
            a++;
        else if (sentence[j] == 'e' || sentence[j] == 'E')
            e++;
        else if (sentence[j] == 'i' || sentence[j] == 'I')
            i++;
        else if (sentence[j] == 'o' || sentence[j] == 'O')
            o++;
        else if (sentence[j] == 'u' || sentence[j] == 'U')
            u++;
    }

    printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", a, e, i, o, u);
}

int main(void) {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);

    return 0;
}