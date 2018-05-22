//
// Created by Martin Matasovic on 3/21/18.
//

#ifndef POLYTEXT_NODE_H
#define POLYTEXT_NODE_H

#include <string>
#include <vector>

using namespace std;
class Node {
private:
    string name;
    vector<Node> adjList;
public:
    // Ctor
    Node(string n);
    string getName();
    void addNeighbor();
    bool isNeighbor(Node n);
};

#endif //POLYTEXT_NODE_H
