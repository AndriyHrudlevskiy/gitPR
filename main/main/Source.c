#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h> // Потрібно для strlen (довжина рядка)

int main() {
    char secret_patik[20];
    int i;
    // strlen рахує скільки букв у слові (щоб не бігти по порожніх клітинках)
    int length;

    printf("Enter word to UA: ");

    scanf("%19s", secret_sentence);

    // 1. Дізнаємось довжину слова (наприклад, "halo" = 4)
    length = strlen(secret_word);

    printf("\nOriginal: %s\n", secret_word);

    // 2. Бігаємо по кожній букві і змінюємо її
    for (i = 0; i < length; i++) {

        // Магія тут: беремо букву і додаємо 1
        secret_word[i] = secret_word[i] + 1;
    }

    printf("Encrypted: %s\n", secret_word);

    return 0;
}