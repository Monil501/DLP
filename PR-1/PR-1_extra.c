#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validateString(const char* str) {
    int len = strlen(str);
    int i = 0;
    
    if (str[i] == 'a') {
        while (i < len && str[i] == 'a') {
            i++; 
        }
    } else {
        return false; 
    }

    if (str[i] == 'b' && str[i + 1] == 'b') {
        i += 2; 
        return i == len; 
    }

    return false;
}

int main() {
 
    const char* strings[] = {
        "aabb", "abb", "bb", "aaaabb", "ab", "aaabb", "bbb", "aabbb",
        "aaaaaaabb",NULL
    };

    printf("String Validation Results:\n");
    for (int i = 0; strings[i] != NULL; i++) {
        const char* str = strings[i];

    
        if (validateString(str)) {
            printf("String: %s -> Valid\n", str);
        } else {
            printf("String: %s -> Invalid\n", str);
        }
    }

    return 0;
}
