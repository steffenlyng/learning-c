#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 10

int main() {

  char buffer[MAXLEN];

  puts("Enter text a line at a time; enter a blank to exit.");

  while(true) {
    fgets(buffer, MAXLEN, stdin);
    
    if (buffer[0] == '\n') {
      break;    
    }

    puts(buffer);
  }
  
  return 0;
}
