class LinkedList {
public:
    private:
    struct Node {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* curr = head;
        int i = 0;

        while (curr) {
            if (i == index) return curr->val;
            curr = curr->next;
            i++;
        }

        return -1;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void insertTail(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }

        curr->next = newNode;
    }

    bool remove(int index) {
        if (!head) return false;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node* curr = head;
        int i = 0;

        while (curr->next) {
            if (i + 1 == index) {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
                return true;
            }
            curr = curr->next;
            i++;
        }

        return false;
    }

    vector<int> getValues() {
        vector<int> result;
        Node* curr = head;

        while (curr) {
            result.push_back(curr->val);
            curr = curr->next;
        }

        return result;
    }
};
