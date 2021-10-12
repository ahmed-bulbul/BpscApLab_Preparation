#include<stdio.h>

int main(){

    char str[50],ch;
    int i, vowel,consonent,digit,word,other;
    printf("Enter  your String: ");
    gets(str);

    i=vowel=consonent=digit=word=other=0;

    while((ch=str[i])!='\0'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowel++;
        }else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonent++;
        }else if(ch>='0' && ch<='9'){
            digit++;
        }else if(ch==' '){
            word++;
        }else{
            other++;
        }
        i++;
    }
    word++;

    printf("Number of vowel = %d \n",vowel);
    printf("Number of consonent = %d \n",consonent);
    printf("Number of digit = %d \n",digit);
    printf("Number of word = %d \n",word);
    printf("Number of others = %d \n",other);

    return 0;
}