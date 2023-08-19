#include <stdio.h>

int main(){
    char cr;
    bool isVowel = false;

    printf("Enter a alphabet: ");
    scanf("%c", &cr);

    if (cr=='a'||cr=='A'||cr=='e'||cr=='E'||cr=='I'||cr=='i'||cr=='o'||cr=='O'||cr=='u'||cr=='U') 
    {
        isVowel = true;
    }

    if(isVowel == true)
        printf("%c is a vowel", cr);
    else
        printf("%c is a Consonant", cr);

        return 0;

}