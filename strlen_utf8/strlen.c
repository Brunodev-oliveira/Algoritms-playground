int strlen_utf8(char *str){
  int count = 0;
  while(*str){
    if((unsigned char)*str <= 0xBF && (unsigned char)*str != 0x20){
      count++;
    }
    str++;
  }
 return count; 
}
