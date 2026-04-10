int sign(char *str){
    int i = 0;
    int shenja = 1;
    while(str[i] == '-' || str[i] == '+'){
        if(str[i]== '-')
            shenja = -1;
        i++;
    }
    if(i > 1)
        return 0;

    return shenja;
}


int ft_atoi(char *str){
    int i;
    i=0;
    int numri;
    numri = 0;
    while(str[i]){
        if(str[i] >= '0' && str[i] <= '9'){
            numri = (numri*10) + (str[i] - '0');
        }
        else if(numri != 0 && (str[i] <= '0' || str[i] >= '9')){
            return numri*sign(str);
        }
        i++;
    }
    return numri*sign(str);
}
