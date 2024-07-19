#include <stdio.h>
#include <wchar.h>
int main() {
wchar_t wideChar = L'ß'; // Wide character 'ß' (Germansharp s)
wprintf(L"Wide character: %lc\n", wideChar);
return 0;
}