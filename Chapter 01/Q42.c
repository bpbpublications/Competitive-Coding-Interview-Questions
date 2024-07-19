struct Point {
int x;
int y;
};
int main() {
struct Point point;
struct Point* ptr = &point;
ptr->x = 10; // Accessing 'x' member using the -> operator
ptr->y = 20; // Accessing 'y' member using the -> operator
printf("x = %d, y = %d\n", ptr->x, ptr->y);
return 0;
}