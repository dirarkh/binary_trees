# Binary Trees


## TREES

A tree is a non-linear abstract data type (node) that are connected via links in a hierarchy-based structure.

![tree](https://github.com/HucksApp/binary_trees/assets/58187974/56d187da-ab38-44a6-93d8-9ac0726782bb)

## General Terms 

 Terms                     |      Description 
 --------------------------|---------------------
 Path                      | Path refers to the sequence of nodes along the edges of a tree.
 Root                      | The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.
 Parent                    | Every node that points to another node (starting from the root) is the parent of the child node it points to
 Child                     | Every node that is pointed to by another node (starting from the root) is the child of the parent node pointing to it
 Leaf                      | The node which does not have any child node 
 Traversing                | Traversing means passing through nodes in a specific order
 Levels                    | Generations of a node
 Height                    | The height of a binary tree is the length of the longest path from the root to a leaf.


 ## Types of Trees

* General Trees
* Binary Trees
* Binary Search Trees


Trees                     |      Description 
--------------------------|---------------------
 General Trees            | Unordered tree data structures where the root node has minimum 0 or maximum ‘n’ subtrees
 Binary Trees             | *General trees* in which the root node can only hold up to maximum 2 subtrees: left subtree and right subtree
 Binary Search Trees      | Is a *Binary Tree* where the data is always stored in such a way that the values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node, i.e. `left subtree < root node ≤ right subtree`


## Types of Binary Trees

Trees                     |      Description 
--------------------------|---------------------
Full Binary Tree          | A binary tree type where every node has either 0 or 2 child nodes 
Complete Binary Tree      | A binary tree type where all the leaf nodes must be on the same level. However, root and internal, all nodes must either have 0, 1 or 2 child nodes
Perfect Binary Tree       | A binary tree type where all the leaf nodes are on the same level and every other node except leaf nodes have 2 children

## node link structure

<img width="773" alt="Screenshot 2024-02-28 at 2 44 08 PM" src="https://github.com/HucksApp/binary_trees/assets/58187974/7b2a1238-4068-4f49-a41d-70d0f1942177">



## Traversing the Binary Trees 

Traversal Types           |      Description 
--------------------------|---------------------
Inorder traversal         | (1) visit all the nodes in the left subtree `inorder(root->left)`
  ⟹                      | (2) Then the root node `display(root->data)`
  ⟹                      | (3) Visit all the nodes in the right subtree ` inorder(root->right)`
Preorder traversal        | (1) Visit root node `display(root->data)`
  ⟹                      | (2) Visit all the nodes in the left subtree `preorder(root->left)`
  ⟹                      | (3) Visit all the nodes in the right subtree ` preorder(root->right)`
Postorder traversal       | (1) Visit all the nodes in the left subtree `postorder(root->left)`
  ⟹                      | (2) Visit all the nodes in the right subtree ` postorder(root->right)`
  ⟹                      | (3) Visit root node `display(root->data)`


                          
## Usage 

* All files were built and compiled on Ubuntu 20.04 LTS on gcc 4.8.4\
using the flags -Wall -Werror -Wextra and -pedantic


## Table of contents 

Files | Description
----- | -----------
[0-binary_tree_node.c](./0-binary_tree_node.c) | C function that creates a binary tree node
[1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c) | C function that inserts a node as the left-child of another node
[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c) | C function that inserts a node as the right-child of another node
[3-binary_tree_delete.c](./3-binary_tree_delete.c) | C function that deletes an entire binary tree
[4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c) | C function that checks if a node is a leaf
[5-binary_tree_is_root.c](./5-binary_tree_is_root.c) | C function that checks if a given node is a root
[6-binary_tree_preorder.c](./6-binary_tree_preorder.c) | C function that goes through a binary tree using pre-order traversal
[7-binary_tree_inorder.c](./7-binary_tree_inorder.c) | C function that goes through a binary tree using in-order traversal
[8-binary_tree_postorder.c](./8-binary_tree_postorder.c) | C function that goes through a binary tree using post-order traversal
[9-binary_tree_height.c](./9-binary_tree_height.c) | C function that measures the height of a binary tree
[10-binary_tree_depth.c](./10-binary_tree_depth.c) | C function that measures the depth of a node in a binary tree
[11-binary_tree_size.c](./11-binary_tree_size.c) | C function that measures the size of a binary tree
[12-binary_tree_leaves.c](./12-binary_tree_leaves.c) | C function that counts the leaves in a binary tree
[13-binary_tree_nodes.c](./13-binary_tree_nodes.c) | C function that counts the nodes with at least 1 child in a binary tree
[14-binary_tree_balance.c](./14-binary_tree_balance.c) | C function that measures the balance factor of a binary tree
[15-binary_tree_is_full.c](./15-binary_tree_is_full.c) | C function that checks if a binary tree is full
[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c) | C function that checks if a binary tree is perfect
[17-binary_tree_sibling.c](./17-binary_tree_sibling.c) | C function that finds the sibling of a node
[18-binary_tree_uncle.c](./18-binary_tree_uncle.c) | C function that finds the uncle of a node

### Authors 
[Dirar](https://github.com/dirarkh) 




