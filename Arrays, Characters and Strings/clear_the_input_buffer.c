#include<stdio.h>

void clear_the_input_buffer();
void clear_the_input_buffer() {
  while(1)
    if(getchar()=='\n')
        break;
}
