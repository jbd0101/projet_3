  int s = 0;
    while(dest[s] != '\0'){
        s++;
    }
    int i =0;
    while(src[i] != '\0'){
        dest[s+i] = src[i];
        i++;
    }
    return(dest);
