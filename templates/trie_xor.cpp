// https://www.codingninjas.com/codestudio/problems/maximum-xor_973113?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=1

struct Node {
    Node* links[2];
    bool containsKey(int bit) {
        return links[bit] != NULL;
    }
    Node* get(int bit) {
        return links[bit];
    }
    void put(int bit, Node* node) {
        links[bit] = node;
    }
};

class Trie {
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    void insert(int num) {
        Node* node = root;
        for(int i = 31; i>=0; i--) {
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)) {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int getMax(int num) {
        int maxNum = 0;
        Node* node = root;
        for(int i = 31; i>=0; i--) {
            int bit = (num>>i) & 1;
            if(node->containsKey(!bit))  {
                maxNum = maxNum | (1<<i);
                node = node->get(!bit);
            } else {
              node = node->get(bit);
            }
        }
        return maxNum;
    }
};


int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    Trie trie;
    for (auto &it : arr1) {
      trie.insert(it);
    }
    int maxi = 0;
    for (auto &it : arr2){
        maxi = max(maxi, trie.getMax(it));
    }
    return maxi;
}
