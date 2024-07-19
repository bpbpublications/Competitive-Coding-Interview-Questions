#ifndef PERSON_H
#define PERSON_H
// Forward declaration of the 'Address' struct
struct Address;
typedef struct {
char name[50];
int age;
struct Address* address; // Using a pointerto 'Address' to avoid circular dependency
} Person;
#endif // PERSON_H
Address.h
#ifndef ADDRESS_H
#define ADDRESS_H
// Forward declaration of the 'Person' struct
struct Person;
typedef struct {
char street[100];
char city[50];
char country[50];
struct Person* owner; // Using a pointer to 'Person' to avoid circular dependency
} Address;
#endif // ADDRESS_H