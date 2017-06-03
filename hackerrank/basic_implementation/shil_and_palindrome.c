#include<stdio.h>
#include<string.h>
int main() {
  char input[1000], final_string[1000], temp_middle_string[1000],reversed_final_string[1000];
  int i,j,k,input_length,alphabet_count[26],final_string_index=0, temp_string_index=0,even_part_length=0,temp_string_length=0;
  scanf("%s", input);
  for(i=0;i<26;i++) {
    alphabet_count[i]=0;
  }
  input_length = strlen(input);
  for(i=0;i< input_length;i++) {
    alphabet_count[input[i] - 'a']++;
  }

   // printf("%c =>%d\n", 'a'+i,alphabet_count[i]);
  //return 0;
  for(i=0,j=0;i<26;i++) {
    if(alphabet_count[i] == 0)
      continue;
    if(alphabet_count[i] %2 ==0) {
      for (k=0;k<alphabet_count[i]/2;k++){
        final_string[final_string_index++] ='a' + i;
      }
    } else {
      for (k=0;k<alphabet_count[i];k++){
        temp_middle_string[temp_string_index++] = 'a' +i;
      }

    }
  }
  final_string[final_string_index] = temp_middle_string[temp_string_index] ='\0';
  even_part_length = strlen(final_string);
  temp_string_length = strlen(temp_middle_string);

  for(i=0;i<temp_string_length;i++) {
    final_string[i+even_part_length]= temp_middle_string[i];
   // printf("index %d => %c\n", i+even_part_length, final_string[i+even_part_length]);
  }

  for(j=0,i=even_part_length-1;i>=0;i--,j++) {
    ;
    final_string[j+even_part_length+temp_string_length] = final_string[i];
  }
  final_string[j+even_part_length+temp_string_length+1] ='\0';
  //printf("%d\n", j+even_part_length+temp_string_length);
  //printf("%s %s\n", j+even_part_length+temp_string_length+, temp_middle_string);
  printf("%s\n", final_string);
  return 0;
}
