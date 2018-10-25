#include <stdio.h>
#include <string.h>

int main() {
  char str[100] = {0, };
  int i, len = 0;

  for(i=1;i<35;i++) {
    len +=sprintf(str+len,"%d",i);
  } 
  
  i=0;
  
  while(str[i] != '\0') {
  	if(str[i] == '0') {
  	  str[i] = '\n';
  }
  	printf("%c",str[i]);
  	i++;
  }
 
  return 0;
}
