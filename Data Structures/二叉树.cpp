// //
// // Created by murane on 24-11-18.
// //
// //记录二叉树的学习
// //二叉树的遍历一共有三种
// //前序遍历：中左右
// //中序遍历：左中右
// //后序遍历：左右中
// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct TreeNode
// {
//     int data;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode* parent;
//
//     TreeNode(int x): data(x)
//     {
//     }
// };
//
// void createPreOrderTree(TreeNode** root)
// {
//     char ch;
//     cout << "请输入当前节点的数值:";
//     cin >> ch;
//     if (ch == '#')
//     {
//         *root = nullptr;
//     }
//     else
//     {
//         *root = new TreeNode(ch);
//         (*root)->data = ch;
//         createPreOrderTree(&(*root)->left);
//         createPreOrderTree(&(*root)->right);
//     }
// }
//
// void createInOrderTree(TreeNode** root)
// {
//     char ch;
//     cout << "请输入当前节点的数值:";
//     cin >> ch;
//     if (ch == '#')
//     {
//         *root = nullptr;
//         return;
//     }
//     else
//     {
//         *root = new TreeNode(ch);
//         createInOrderTree(&(*root)->left);
//         (*root)->data = ch;
//         createInOrderTree(&(*root)->right);
//     }
// }
//
// void createPostOrderTree(TreeNode** root)
// {
//     char ch;
//     cout << "请输入当前节点的数值:";
//     cin >> ch;
//     if (ch == '#')
//     {
//         *root = nullptr;
//         return;
//     }
//     else
//     {
//         *root = new TreeNode(ch);
//         createPostOrderTree(&(*root)->left);
//         createPostOrderTree(&(*root)->right);
//         (*root)->data = ch;
//     }
// }
//
// void preOrderTraversal(TreeNode* root)
// {
//     if (root)
//     {
//         cout << root->data << " ";
//         preOrderTraversal(root->left);
//         preOrderTraversal(root->right);
//     }
// }
//
// void inOrderTraversal(TreeNode* root)
// {
//     if (root)
//     {
//         inOrderTraversal(root->left);
//         cout << root->data << " ";
//         inOrderTraversal(root->right);
//     }
// }
//
// void postOrderTraversal(TreeNode* root)
// {
//     if (root)
//     {
//         postOrderTraversal(root->left);
//         postOrderTraversal(root->right);
//         cout << root->data << " ";
//     }
// }
//
// void freeTree(TreeNode* root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     freeTree(root->left);
//     freeTree(root->right);
//     free(root);
// }
//
// int main()
// {
//     TreeNode* TN;
//     createInOrderTree(&TN);
//     preOrderTraversal(TN);
//     freeTree(TN);
//     return 0;
// }
