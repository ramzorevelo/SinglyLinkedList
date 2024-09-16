#include <iostream>

class SinglyLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        // Constructor for easier initialization
        Node(int value) : data{ value }, next{ nullptr } {}
    };

    Node* head;

public:
    // Constructor to initialize the head
    SinglyLinkedList() : head{ nullptr } {}

    // Destructor to clear the list
    ~SinglyLinkedList() {
        clear();
    }

    // Insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode{ new Node(value) };
        // Set newNode's next to head
        // Set head to newNode
    }

    // Insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode{ new Node(value) };
        // Check if head is nullptr
        // If head is nullptr, set head to newNode
        // Otherwise, traverse to the end of the list
        // Set the next of the last node to newNode
    }

    // Delete a node by value
    void deleteNode(int value) {
        if (!head) return; // List is empty

        // If the node to be deleted is the head
        // Create a temporary pointer for the head
        // Move head to the next node
        // Delete the temporary pointer

        Node* current{ head };
        Node* previous{ nullptr };

        // Traverse the list to find the node with the specified value
        // If current is not nullptr
        // Set previous's next to current's next
        // Delete current
    }

    // Search for a node by value
    bool searchNode(int value) const {
        Node* current{ head };
        // While current is not nullptr
        // If current's data equals value, return true
        // Move to the next node
        // Return false if the node is not found
    }

    // Clear the linked list
    void clear() {
        Node* current{ head };
        while (current) {
            Node* nextNode{ current->next };
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }

    // Display the linked list
    void display() const {
        Node* current{ head };
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << '\n';
    }
};

int main() {
    SinglyLinkedList list;

    // Inserting nodes
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAtEnd(30);

    // Display the list
    std::cout << "List after insertions: ";
    list.display();

    // Searching for a node
    std::cout << "Searching for 20: " << (list.searchNode(20) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 99: " << (list.searchNode(99) ? "Found" : "Not Found") << std::endl;

    // Deleting a node
    list.deleteNode(20);
    std::cout << "List after deleting 20: ";
    list.display();

    // Clear the list
    list.clear();
    std::cout << "List after clearing: ";
    list.display();

    return 0;
}
