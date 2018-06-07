// Java implementation of tree using array
// numbering starting from 0 to n-1


import java.util.*;
import java.lang.*;
import java.io.*;


class Tree {
  public static void main(String[] args) {

    Array_imp obj = new Array_imp();

    obj.set_Root("A");
    obj.set_Left("B",0);
    obj.set_Right("C",0);
    obj.set_Left("D",1);
    obj.set_Right("E",1);
    obj.set_Left("F",2);
    obj.set_Right("G",2);
    obj.print_Tree();
  }

}

class Array_imp {
  static String[] str = new String[10];

  // create root
  public void set_Root(String key) {
    str[0] = key;
  }

  // set left son of parent
  public void set_Left(String key, int parent) {
    int t = (parent *2) +1 ;
    str[t] = key;
  }

  // set right son of parent
  
  public void set_Right(String key, int parent) {
    int t = (parent*2) +2;
    str[t] = key;
  }

  // print the tree
  public void print_Tree() {
    for (int i =0; i < 10 ; i++) {
      if (str[i] != null) {
        System.out.println(str[i]);
      }
    }
  }
}