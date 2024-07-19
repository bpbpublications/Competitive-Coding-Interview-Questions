#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[]) {
int opt;
while ((opt = getopt(argc, argv, "ab:c")) != -1) {
switch (opt) {
case 'a':
printf("Option -a\n");
break;
case 'b':
printf("Option -b with argument: %s\n", optarg);
break;
case 'c':
printf("Option -c\n");
break;
case '?':
printf("Unrecognized option: -%c\n", optopt);
break;
}
}
return 0;
}