#include <stdio.h>
#include <string.h>

int main() {
  char str[101];
  int i;
  scanf("%s", str);

  for (i =0; i< strlen(str);i++)  {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] +=32;
    } else {
      str[i] -= 32;
    }
  }

  printf("%s", str);
  return 0;
}

// java
import java.io.*;
import java.util.*;
class example_2
{
    static Scanner sc;
    static PrintWriter out;

    static void init() throws Exception
    {
        sc=new Scanner(new File("si.txt"));
        out=new PrintWriter(new File("so.txt"));
    }

    public static void main(String args[]) throws Exception
    {
        init();
        char[] a=sc.next().toCharArray();
        for(int i=0;i<a.length;i++)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]-=32;
            }
            else
            {
                a[i]+=32;
            }
        }
        for(char ch:a)
        {
            out.print(ch);
        }
        out.close();
    }
}


///
#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cin>>str;
int n=str.length();
while(n--)
str[n]+=(str[n]>96?-32:32);
cout<<str;
}

//
int main()
{
string s;
cin >> s;
for(int i = 0; s[i] !='\0'; ++i)
s[i] = s[i]^32;
cout << s << endl;
return 0;
}

//

int main()
{
string input;
cin >> input;
for(int i=0; i < input.length(); i++) {
if(islower(input[i])) {
input[i] = toupper(input[i]);
} else if(isupper(input[i])) {
input[i] = tolower(input[i]);
}
}
cout << input;
return 0;
}
