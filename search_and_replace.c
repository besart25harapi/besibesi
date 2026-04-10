#include <unistd.h>
#include <stdio.h>

int str_len(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void printoje(char *stringu, char *a, char *b){
    int i;
    i = 0;
    while(stringu[i]){
        if(stringu[i] == *a){
            write(1, b, 1);
        }
        else{
            write(1, &stringu[i], 1);
        }
        i++;
    }
}

int main(int argc, char **argv){
    if(argc != 4){
        return 0;
    }
    if(str_len(argv[2]) != 1 || str_len(argv[3]) != 1){
        return 0;
    }
    printoje(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return 0;
}