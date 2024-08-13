#include <stdio.h>
int main(){
    char string[100], ch;
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++){
        char ch = string[i];
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    printf("%d", count);
}