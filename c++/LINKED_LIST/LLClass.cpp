#include<iostream> 
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;
    
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
    public:
    ListNode* head;
    ListNode* Tail;
    int size;

    LinkedList() {
        head = Tail = NULL;
        size = 0;
    }

    // Insert at the head of the linked list
    void insertAtHead(int val) {
        ListNode* temp = new ListNode(val);
        if (size == 0) {
            head = Tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // Insert at the tail of the linked list
    void insertAtTail(int val) {
        ListNode* temp = new ListNode(val);
        if (size == 0) {
            head = Tail = temp;
        } else {
            Tail->next = temp;
            Tail = temp;
        }
        size++;
    }

    // Insert at any given index
    void InsertAt_AnyIndex(int idx, int val) {
        if (size == 0) {
            cout << "Empty linked list" << endl;
            return;
        } 
        if (idx < 0 || idx > size) {
            cout << "Invalid index" << endl;
            return;
        } 
        if (idx == 0) {
            insertAtHead(val);
        } else if (idx == size) {
            insertAtTail(val);
        } else {
            ListNode* t = new ListNode(val);
            ListNode* temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    // Delete at the head of the linked list
    void deleteAtHead() {
        if (size == 0) {
            cout << "Empty LinkedList" << endl;
            return;
        }
        if (size == 1) {
            head = Tail = NULL;
        } else {
            head = head->next;
        }
        size--;
    }

    // Delete at the tail of the linked list
    void deleteAT_Tail() {
        if (size == 0) {
            cout << "Empty LinkedList" << endl;
            return;
        }
        if (size == 1) {
            head = Tail = NULL;
        } else {
            ListNode* temp = head;
            while (temp->next != Tail) {
                temp = temp->next;
            }
            Tail = temp;
            Tail->next = NULL;
        }
        size--;
    }

    // Delete at any given index
    void deleteAt_AnyIndex(int idx) {
        if (size == 0) {
            cout << "Empty LinkedList" << endl;
            return;
        }
        if (idx >= size || idx < 0) {
            cout << "Invalid index" << endl;
            return;
        }
        if (idx == 0) {
            deleteAtHead();
        } else if (idx == size - 1) {
            deleteAT_Tail();
        } else {
            ListNode* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    // Display the linked list
    void display() {
        ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Get element at any index
    int Get_elementInIndex(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return -1;
        } else if (idx == 0) {
            return head->val;
        } else if (idx == size - 1) {
            return Tail->val;
        } else {
            ListNode* temp = head;
            for (int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
    }
};

int main() {
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(19);
    ll.insertAtHead(26);
    ll.display();
    cout << ll.size << endl;

    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();
    cout << ll.size << endl;

    ll.InsertAt_AnyIndex(3, 60);
    ll.InsertAt_AnyIndex(4, 70);
    ll.display();
    cout << ll.size << endl;

    cout << ll.Get_elementInIndex(0) << endl;
    cout << ll.Get_elementInIndex(ll.size - 1) << endl;
    cout << ll.Get_elementInIndex(4) << endl;

    ll.deleteAtHead();
    ll.deleteAtHead();
    ll.display();

    ll.deleteAT_Tail();
    ll.deleteAT_Tail();
    ll.display();

    ll.deleteAt_AnyIndex(2);
    ll.display();
    ll.deleteAt_AnyIndex(2);
    ll.display();

    return 0;
}

// void display(ListNode*head)
// {
//     ListNode*temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// void DislpayRec(ListNode*head)
// {
//     if(head==NULL) return;
//     cout<<head->val<<" ";
//     DislpayRec(head->next);
// }
// // int main()
// {
//     ListNode* a = new ListNode(20);
//     ListNode* b = new ListNode(18);
//     ListNode* c = new ListNode(30);
//     ListNode* d = new ListNode(9);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     cout<<a->val<<endl;
//     cout<<b->val<<endl;
//     cout<<a->next->next->val<<endl;
//     ListNode*temp = a;
//     c->val = 50;
//     cout<<c->val;
//     // while(temp!=NULL)
//     // {
//     //     cout<<temp->val<<" ";
//     //     temp = temp->next;
//     // }
//     // cout<<endl;
//     // display(a);
//     cout<<endl;
//     DislpayRec(a);



// }