int main() {
int i, j;
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
if (some_condition) {
goto exit_loops;
}
}
}
exit_loops:
printf("Exited both loops\n");
return 0;
printf(“code continues\n”);\\Will not executed as return statement shifts ends the program.
}