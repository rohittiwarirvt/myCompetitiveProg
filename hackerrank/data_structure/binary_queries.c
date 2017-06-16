#include<stdio.h>
#include<math.h>
int main() {
  int array[100], result;
  int i,j, query_number, array_size, query_identifier, inverse_bit_index, start_index, end_index;
  scanf("%d %d", &array_size, &query_number);
  for(i=0;i< array_size;i++) {
    scanf("%d", &array[i]);
  }
  //for(i=0;i< array_size;i++)
    //  printf("%d ", array[i]);
  while(query_number--){
    scanf("%d", &query_identifier);
    if (query_identifier == 1 ) {
      scanf("%d", &inverse_bit_index);
      if (array[inverse_bit_index-1] == 1) {
        array[inverse_bit_index-1] =0;
      } else {
        array[inverse_bit_index-1] = 1;
      }
      //for(i=0;i< array_size;i++)
        //printf("%d ", array[i]);
    } else {
      scanf("%d %d", &start_index, &end_index);
      result = 0;
      for (i=end_index-1,j=0;i >= start_index;j++,i-- ){
        result = result + (pow(2,j) *array[i]);
        //printf("Result %d, %d, %d", result, i, j);
      }
      //for(i=0;i< array_size;i++)
        //printf("%d ", array[i]);
      //printf("%d", result);
      if (result % 2 == 0 ){
        printf("EVEN");
      } else {
        printf("ODD");
      }
    }
  }
  return 0;
}
