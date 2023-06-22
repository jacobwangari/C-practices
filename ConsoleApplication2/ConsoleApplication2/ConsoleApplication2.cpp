
#include <iostream>

using namespace std;

struct node {
    int data;
    node * next;
};

class linked_list 
{
private:
    node * head, * tail;
public:
    linked_list() {
        head = NULL;
        tail = NULL;
    }
    void addNode(int n) {
        node* temp = new node;
        temp->data = n;
        temp->next = NULL;

        if (head == NULL) {
            tail = temp;
            head = temp;
        }
        else {
            tail->next = temp;
            tail = tail-> next;
        }
    }
};


int main()
{
    linked_list linked_one;

    linked_one.addNode(90);
    linked_one.addNode(50);

    

    cout << "";

    return 0;
}
