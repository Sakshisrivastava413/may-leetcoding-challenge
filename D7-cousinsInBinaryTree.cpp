// Cousins in Binary Tree
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/

// Time: o(n) Space: o(n)
// copied :(
// BFS approach
bool isCousins(TreeNode* root, int x, int y) {
    // queue to store cur node and its parent
        queue<pair<TreeNode*, TreeNode*>> q;
        // root node has its parent null
        q.push({ root, NULL });
        // for each node in queue
        while(!q.empty()) {
            int size = q.size();
            TreeNode* xNode = NULL, *yNode = NULL;
            // for each level of the queue
            while (size--) {
                auto pp = q.front();
                TreeNode* top = pp.first;
                TreeNode* parent = pp.second;
                // if node's val =x or =y save their parents
                if (top->val == x) xNode = parent;
                if (top->val == y) yNode = parent;
                // push the cur node's children and cur node in the queue
                if (top->left != NULL) q.push({ top->left, top });
                if (top->right != NULL) q.push({ top->right, top });
                q.pop();
            }
            // check if in the same level both node are found and both's parent are not equal
            if(xNode != NULL && yNode != NULL && xNode != yNode) {
                return true;
            }
        }
        return false;
    }