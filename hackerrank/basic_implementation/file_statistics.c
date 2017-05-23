#include <unistd.h>
#include<stdio.h>
#include<string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  int t;
  struct stat Finfo;
  FILE *fp;
  char filepath[1020],line[10001];
  int line_count,char_count, number_words, userid, ownerid=1,i;
  long last_modified;
  scanf("%[^\n]s", filepath);
  fp = fopen(filepath,"r");
  printf("%s\n", fp);
  if (fp == NULL) return 0;
  stat(filepath, &Finfo);
  while(fgets(line, 100001, fp) != NULL) {
    line_count++;
    i=0;
    while(line[i] !='\0') {
      char_count++;
      if (line[i] ==' ')
        number_words++;
      i++;
    }
  }

  printf("%d\n%d\n%d\n%d\n\n%d\n%ld",line_count, number_words, char_count, Finfo.st_uid,Finfo.st_gid, Finfo.st_mtime);
  return 0;
}
