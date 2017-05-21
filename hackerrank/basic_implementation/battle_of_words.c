#include<stdio.h>
#include<string.h>

int main() {
  int t,i,j,alice_is_on_lead,bob_is_on_lead ,alice_str_length,bob_str_length;
  char alice[100001],bob[100001];
  int alice_alp[25],bob_alp[25];
  scanf("%d",&t);
  while(t--) {
    getchar();
    scanf("%[^\n]s", alice);
    getchar();
    scanf("%[^\n]s", bob);
    alice_str_length = strlen(alice);
    bob_str_length = strlen(bob);
    for (i=0;i<26;i++) {
     alice_alp[i]=bob_alp[i] =0;
    }
    alice_is_on_lead=bob_is_on_lead =0;
    for(i=0;i<alice_str_length; i++) {
      if (alice[i] !=' ')
      alice_alp[(alice[i]-'a')]++;
    }
    for(i=0;i<bob_str_length; i++) {
      if (bob[i] !=' ')
      bob_alp[(bob[i]-'a')]++;
    }
    alice_is_on_lead = bob_is_on_lead=0;
    for(i=0;i<26;i++) {
      if (alice_alp[i] > bob_alp[i]) {
        alice_is_on_lead++;
      } else if (alice_alp[i] < bob_alp[i]){
         bob_is_on_lead++;
      }
    }

    printf("%d %d\n", alice_is_on_lead, bob_is_on_lead);
    if (alice_is_on_lead > bob_is_on_lead && bob_is_on_lead ==0) {
      printf("You win some.\n");
    } else if(bob_is_on_lead > alice_is_on_lead && alice_is_on_lead==0) {
      printf("You lose some.\n");
    } else {
      printf("You draw some.\n");
    }

  }
  return 0;
}
