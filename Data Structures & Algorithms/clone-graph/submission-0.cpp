/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    Node* dfs(Node* node,map<Node*,Node*> &vis){
        if(vis.count(node)) return vis[node];
        Node* next_res = new Node(node->val);
        vis[node]=next_res;
        for(auto n:node->neighbors){     
            next_res->neighbors.push_back(dfs(n,vis));
        }
        return next_res;
    }

    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        map<Node*,Node*> vis;
        return dfs(node,vis);
    }
};
