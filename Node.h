/*
 *
 *
 * Created by Primary on 5/14/2018.
*/

#ifndef POLYTEXT_NODE_H
#define POLYTEXT_NODE_H

#include "Tag.h"

#include <string>
#include <vector>

using namespace std;
class Node {

private:
    string text;
    vector<Tag> tags;

    vector<Node> siblings;

    // possible previous/next Nodes
    vector<Node> pPrevious;
    vector<Node> pNext;

public:
    string getName();
    vector<Tag> getTags();
    vector<Node> getPPrevious();
    vector<Node> getPNext();
    void connect(Node* n);

};


#endif //POLYTEXT_NODE_H
