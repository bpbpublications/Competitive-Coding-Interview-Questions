#include <stdio.h>
#include <regex.h>
int main() {
regex_t regex;
int reti;
char input[] = "Hello, World!";
char pattern[] = "Hello.*World";
// Compile the regular expression
reti = regcomp(&regex, pattern, 0);
if (reti) {
fprintf(stderr, "Could not compile regex\n");
return 1;
}
// Match the string
reti = regexec(&regex, input, 0, NULL, 0);
if (!reti) {
printf("Match found: %s\n", input);
} else if (reti == REG_NOMATCH) {
printf("No match\n");
} else {
fprintf(stderr, "Error while matching\n");
return 1;
}
// Free the compiled regular expression
regfree(&regex);
return 0;
}