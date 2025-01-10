#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void replaceGoodName(char rawString[], char name[]) {
    const char goodName[] = "GoodName";
    char result[MAX_LENGTH];
    int i = 0, j = 0;

    // Loop through the raw string
    while (rawString[i] != '\0') {
        // Check if we found "GoodName"
        if (strncmp(&rawString[i], goodName, strlen(goodName)) == 0) {
            // If found, copy the user's name
            for (int k = 0; name[k] != '\0'; k++) {
                result[j++] = name[k];
            }
            // Skip over "GoodName"
            i += strlen(goodName);
        } else {
            // Otherwise, copy the current character
            result[j++] = rawString[i++];
        }
    }
    
    // Null-terminate the result string
    result[j] = '\0';

    // Print the modified string
    printf("Output String: %s\n", result);
}

int main() {
    char rawString[MAX_LENGTH] = "Hello GoodName"; // Example raw string
    char name[MAX_LENGTH];

    // Prompt the user for their name
    printf("Your good name, please: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // Remove the newline character

    // Replace "GoodName" in the raw string with the user input
    replaceGoodName(rawString, name);

    return 0;
}
