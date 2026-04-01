# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        def maxHeight(root):
            if not root:
                return 0
            
            return 1 + max(maxHeight(root.left), maxHeight(root.right))
        
        if not root:
            return 0
        
        left_max = maxHeight(root.left)
        right_max = maxHeight(root.right)

        diameter = left_max + right_max
        sub_tree = max(self.diameterOfBinaryTree(root.left),self.diameterOfBinaryTree(root.right))

        return max(sub_tree, diameter)