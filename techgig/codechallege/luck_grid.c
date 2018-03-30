#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char** amount_value(int input1_size, char** input1,int* output_size) {
        //Write code here
}

int main(){
  int output_size;
  char** ouput;
  int ip1_size =0;
  int ip1_i;
  scanf("%d\n", &ip1_size);
  char *ip1[ip1_size];
  for(ip1_i=0;ip1_i < ip1_size; ip1_i++) {
    char *ip1_item = (char*)malloc(512000*sizeof(char));
    scanf("%s", ip1_item);
   // printf("%s\n", ip1_item);
    ip1[ip1_i] = ip1_item;
   // printf("%s\n", ip1[ip1_i]);
  }

  for(ip1_i=0; ip1_i < ip1_size; ip1_i++){
    printf("%s\n", ip1[ip1_i]);
  }
  //output = amount_value(ip1_size, ip1, &output_size);
  //int output_i;
  //for(output_i =0;output_i< output_size;output_i++){
  //  printf("%s\n", ouput[output_i]);
  // }
  return 0;
}
