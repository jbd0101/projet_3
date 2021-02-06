    if(str==NULL){return -1;};
    int len = strlen(str);
    if(len==0){return(1);};
    int left = 0;
    int right = len-1;
    while(left < right){
        if(str[left]== ' '){
           left++;
        }else if(str[right]==' '){
            right--;
        }else if(str[left] != str[right]){
            return(0);
        }else{
                left++;
                right--;
            }
        }

        return(1);
