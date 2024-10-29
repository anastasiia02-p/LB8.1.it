#include <iostream>
#include <cstring>
using namespace std;

// Функція для підрахунку входження символів зі слова "BASIC"
int* countBASICSymbols(const char* str) {
    static int counts[5] = { 0 }; // Для B,A,S,I,C
    size_t len = strlen(str);

    for (size_t i = 0; i < len; i++) {
        switch (str[i]) {
        case 'B': counts[0]++; break;
        case 'A': counts[1]++; break;
        case 'S': counts[2]++; break;
        case 'I': counts[3]++; break;
        case 'C': counts[4]++; break;
        }
    }
    return counts;
}

// Функція для заміни "BASIC" на "Delphi"
char* replaceBasicWithDelphi(const char* str) {
    size_t len = strlen(str);
    char* result = new char[len * 2]; 
    result[0] = '\0';
    char* t = result;

    for (size_t i = 0; i < len; i++) {
        if (i <= len - 5 &&
            str[i] == 'B' &&
            str[i + 1] == 'A' &&
            str[i + 2] == 'S' &&
            str[i + 3] == 'I' &&
            str[i + 4] == 'C') {
            strcat(t, "Delphi");
            t += 6;
            i += 4;
        }
        else {
            *t = str[i];
            t++;
            *t = '\0';
        }
    }
    return result;
}

int main() {
    char str[1000];
    cout << "Enter a string: ";
    cin.getline(str, 999);

    // Підрахунок символів
    int* counts = countBASICSymbols(str);
    cout << "\nThe number of occurrences of characters from the word 'BASIC':\n";
    cout << "B: " << counts[0] << endl;
    cout << "A: " << counts[1] << endl;
    cout << "S: " << counts[2] << endl;
    cout << "I: " << counts[3] << endl;
    cout << "C: " << counts[4] << endl;

    // Заміна BASIC на Delphi
    char* modified = replaceBasicWithDelphi(str);
    cout << "\nThe line after replacing 'BASIC' with 'Delphi':\n";
    cout << modified << endl;

    delete[] modified;
    return 0;
}