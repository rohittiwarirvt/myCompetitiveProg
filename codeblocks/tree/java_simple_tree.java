// Java program to insert element in binary tree

import java.util.LinkedList;
import java.util.Queue;


class GeeksForGeeks {
  
  /* A binary tree has key, pointer to left child and a pointer to 
  right child */

  static class Node {
    int key;
    Node left, right;

    // constructor
    Node (int key) {
      this.key = key;
      left = right = null;
    }
  }

  static Node root;
  static Node temp = root;

  /* Inorder traversal */

  static void inorder(Node temp) {
    if (temp == null) {
      return ;
    }

    inorder(temp.left);
    System.out.println(temp.key+ " ");
    inorder(temp.right);
  }

  // function to insert element in binary tree
  static void insert(Node temp, int key) {
    Queue<Node> q = new LinkedList<Node>();
    q.add(temp);

    // Do level order traversal until we find an empty place.
    while(!q.isEmpty()) {
      temp = q.peek();
      q.remove();

      if ( temp.left == null) {
        temp.left = new Node(key);
        break;
      } else {
        q.add(temp.left);
      }

      if ( temp.right == null) {
        temp.right = new Node(key);
        break;
      } else {
        q.add(temp.right);
      }
    }
  }

  // driver code
  public 
  static void main(String[] args) {
    
    root = new Node(10);
    
    root.left = new Node(11);
    root.right = new Node(12);
    
    root.left.left = new Node(13);
    root.left.right = new Node(14);
    
    root.right.left = new Node(15);
    root.right.right = new Node(16);

    System.out.println("Inorder traversal before insertion");
    inorder(root);

    int key = 20;
    insert(root, key);
    System.out.println("Inorder traversal after insertion");

    inorder(root);

  }

}