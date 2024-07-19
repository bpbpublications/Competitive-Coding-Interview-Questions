#include <stdio.h>
int main() {
int near *ptr_near;
int far *ptr_far;
ptr_near = (int near *)0x1234; // Near pointer to address 0x1234
ptr_far = (int far *)0x5678; // Far pointer to address 0x5678
printf("Near pointer value: %p\n", ptr_near);
printf("Far pointer value: %p\n", ptr_far);
return 0;
}