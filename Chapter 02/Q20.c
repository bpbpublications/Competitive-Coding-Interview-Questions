#include <iostream>
#include <unordered_map>
#include <cctype>
bool areAnagrams(const std::string& str1, const std::string& str2) {
// Remove non-alphanumeric characters and convert to lowercase
std::string cleanedStr1, cleanedStr2;
for (char c : str1) {
if (std::isalnum(c)) {
cleanedStr1 += std::tolower(c);
}
}
for (char c : str2) {
if (std::isalnum(c)) {
cleanedStr2 += std::tolower(c);
}
}
// Check lengths
if (cleanedStr1.length() != cleanedStr2.length()) {
return false;
}
// Create frequency maps
std::unordered_map<char, int> freqMap;
for (char c : cleanedStr1) {
freqMap[c]++;
}
// Compare with frequency map of the second string
for (char c : cleanedStr2) {
if (freqMap.find(c) == freqMap.end() || freqMap[c] == 0)
{
return false;
}
freqMap[c]--;
}
return true;
}
int main() {
std::string str1 = "listen";
std::string str2 = "silent";
if (areAnagrams(str1, str2)) {
std::cout << "The strings are anagrams." << std::endl;
} else {
std::cout << "The strings are not anagrams." << std::endl;
}
return 0;
}