#include <ctype.h>

char *capitalizeTitle(char *title) {
    int n = strlen(title);
    if (n == 0) return title;

    // Capitalize the first letter of the title
    if (islower(title[0])) title[0] = toupper(title[0]);

    // Iterate over the rest of the characters in the title
    for (int i = 1; i < n; i++) {
        if (title[i - 1] == ' ') {
            // Capitalize the first letter of the current word
            if (islower(title[i])) title[i] = toupper(title[i]);
        } else {
            // Convert the remaining letters of the current word to lowercase
            if (isupper(title[i])) title[i] = tolower(title[i]);
        }
        // Handle the special case of 1 or 2 letter words
        if ((i == n - 1 || title[i + 1] == ' ') && (i - 1 == 0 || title[i - 2] == ' ')) {
            if (isupper(title[i])) title[i] = tolower(title[i]);
        }
    }
    return title;
}
