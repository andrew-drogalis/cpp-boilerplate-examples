

#include <string>
#include <vector>
#include <iostream>

template <typename T>
struct Node
{
    T val;
    Node<T>* left;
    Node<T>* right;

    Node(T val, Node<T>* left = NULL, Node<T>* right = NULL) : val(val), left(left), right(right) { }

    ~Node() {
        delete left;
        delete right;
    }
};


template <typename T>
Node<T>* GenerateTree(std::vector<std::string>::iterator& tree_it, std::vector<std::string>::iterator& tree_it_end) {
    if (tree_it == tree_it_end) { return NULL; }
    std::string val = *tree_it;
    ++tree_it;
    if (val == "x") { return NULL; }
    Node<T>* left = GenerateTree<T>(tree_it, tree_it_end);
    Node<T>* right = GenerateTree<T>(tree_it, tree_it_end);
    return new Node<T>{std::stoi(val), left, right};
}


int main() {

    std::string tree_str = "1 2 3 x 3 4 5 x";
    std::vector<std::string> tree_vect = {"1", "2", "3"};
    auto tree_iter = tree_vect.begin();
    auto tree_iter_end = tree_vect.end();
    Node<int>* tree = GenerateTree<int>(tree_iter, tree_iter_end);

    return 0;
}