#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node
{
    Node *next;
    Node *prev;
    int value;
    int key;
    Node(Node *p, Node *n, int k, int val) : prev(p), next(n), key(k), value(val) {};
    Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val) {};
};

class Cache
{

protected:
    map<int, Node *> mp;            // map the key to the node in the linked list
    int cp;                         // capacity
    Node *tail;                     // double linked list tail pointer
    Node *head;                     // double linked list head pointer
    virtual void set(int, int) = 0; // set function
    virtual int get(int) = 0;       // get function
};
class LRUCache : public Cache
{
private:
    int capacity;

public:
    LRUCache(int cap)
    {
        cp = cap;
        capacity = cap;
        tail = NULL;
        head = NULL;
    }

    void set(int key, int value) override
    {
        if (mp.find(key) != mp.end())
        {
            Node *node = mp[key];
            node->value = value;

            if (node->prev != NULL)
            {
                node->prev->next = node->next;
                if (node->next != NULL)
                    node->next->prev = node->prev;
                else
                    tail = node->prev;
                node->prev = NULL;
                node->next = head;
                head->prev = node;
                head = node;
            }
        }
        else
        {

            Node *node = new Node(NULL, head, key, value);
            if (head != NULL)
                head->prev = node;
            head = node;
            if (tail == NULL)
                tail = node;

            if (mp.size() == capacity)
            {
                mp.erase(tail->key);
                tail = tail->prev;
                delete tail->next;
                tail->next = NULL;
            }

            mp[key] = node;
        }
    }

    int get(int key) override
    {
        if (mp.find(key) != mp.end())
        {
            Node *node = mp[key];

            if (node->prev != NULL)
            {
                node->prev->next = node->next;
                if (node->next != NULL)
                    node->next->prev = node->prev;
                else
                    tail = node->prev;
                node->prev = NULL;
                node->next = head;
                head->prev = node;
                head = node;
            }

            return node->value;
        }
        return -1;
    }
};
int main()
{
    int n, capacity, i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for (i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        if (command == "get")
        {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if (command == "set")
        {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}
