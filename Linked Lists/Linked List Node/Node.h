template <class Type>
struct Node {
  Type data;
  Node<Type>* next_node_ptr;
};