#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool validateString(const char* str) {
    int len = strlen(str);
    int i = 0;

    while ( str[i] == 'a') {
        i++;
    }

    if (str[i] == 'b' && str[i + 1] == 'b') {
        i += 2; 
        return i == len; 
    }
    return false; 
}
int main() {
    const char* strings[] = {
        "aaabb",
        "Abab",
        "bbb",
        "aaa",
        "^",
        "baaabb",
        "baaabb",
        "aaaab",
        "abbabb",
        "abb",
        "aaaaaabb",
        "bb"
    };

    int numStrings = 12;

    printf("String Validation Results:\n");
    for (int i = 0; i < numStrings; i++) {
        const char* str = strings[i];
        
        if (validateString(str)) {
            printf("String: %s -> Valid\n", str);
        } else {
            printf("String: %s -> Invalid\n", str);
        }
    }
    return 0;
}
