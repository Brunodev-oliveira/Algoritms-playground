void capitalized_case(char *str){
  char *strPosition_zero = str;
  while(*str){
    if(strPosition_zero == str){
      if((unsigned char)*str >= 0x61 && (unsigned char)*str <= 0x7A){       
        *str = *str - 0x20;
      }else if((unsigned char)*str == 0xC3){
        ++str;
        if((unsigned char)*str >= 0xA0 && (unsigned char)*str <= 0xBA)
            *str = *str - 0x20;
        }
      }else if((unsigned char)*str>= 0x41 && (unsigned char)*str <= 0x5A){
      *str = *str + 0x20;

    }else if((unsigned char)*str == 0xC3){
      str++;
      if((unsigned char)*str >= 0x80 && (unsigned char)*str <= 0x9A)
        *str = *str + 0x20;


    }
    str++;
  }


}
