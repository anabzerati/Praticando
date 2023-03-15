/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int funcao(struct TreeNode *root, int num){
    int leftNum = 0, rightNum = 0;
    if(!root){ //condição de parada
        return 0;
    } 
    if(!(root->right) && !(root->left)){ //último nó
        return (10 * num) + root->val;
    }
    if(root->right){
        rightNum = funcao(root->right, (num * 10) + root->val);
    }
    if(root->left){
        leftNum = funcao(root->left, (num * 10) + root->val);
    }
    return leftNum + rightNum;
}

int sumNumbers(struct TreeNode* root){
    if(!root){
        return NULL;
    }

    return funcao(root, 0);
}