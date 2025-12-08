#include <stdio.h>
#include <string.h>

// Convert entire string to uppercase
void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII math
        }
    }
}

// Convert entire string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // ASCII math
        }
    }
}

// Toggle case of each character
void toggleCase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // lowercase ? uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // uppercase ? lowercase
        }
    }
}

// Proper Sentential Case: First letter uppercase, rest lowercase
void sententialCase(char *str) {
    int i = 0;

    // Convert first alphabetic character to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            i++;
            break;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // already uppercase
            i++;
            break;
        }
        i++;
    }

    // Convert the rest to lowercase
    for (; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char input[100];
    char output[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // remove newline

    // Uppercase
    strcpy(output, input);
    toUpperCase(output);
    printf("Uppercase: %s\n", output);

    // Lowercase
    strcpy(output, input);
    toLowerCase(output);
    printf("Lowercase: %s\n", output);

    // Toggle Case
    strcpy(output, input);
    toggleCase(output);
    printf("Toggle Case: %s\n", output);

    // Sentential Case
    strcpy(output, input);
    sententialCase(output);
    printf("Sentential Case: %s\n", output);

    return 0;
}

