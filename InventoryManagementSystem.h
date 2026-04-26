#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;

// colour helpers - makes output pretty
void greenText() { cout << "\033[32m"; }
void redText() { cout << "\033[31m"; }
void yellowText() { cout << "\033[33m"; }
void cyanText() { cout << "\033[36m"; }
void normalText() { cout << "\033[0m"; }

// ======================== GROUP TABLE (YELLOW) ========================
void showGroupTable() {
    yellowText();
    cout << "\n+------------------------------------------------------------------+\n";
    cout << "|                    APM11A1 ASSIGNMENT 4                          |\n";
    cout << "|                    DATA STRUCTURES                               |\n";
    cout << "+------------------------------------------------------------------+\n";
    cout << "| STUDENT NAME                    | STUDENT NUMBER   | INITIALS    |\n";
    cout << "+------------------------------------------------------------------+\n";
    cout << "| Mongiwethu Eddy Ncube           | 221152725        | MEN         |\n";
    cout << "| Sandile Sibeko                  | 220115085        | SS          |\n";
    cout << "| Keamogetse Selebano             | 220068905        | KS          |\n";
    cout << "| Ndzulamo Michelle Yingwani      | 220122253        | NMY         |\n";
    cout << "| Hlonipho Nersely Bila           | 220080694        | HNB         |\n";
    cout << "| Zizile Ezona Mbanqi             | 220061777        | ZEM         |\n";
    cout << "| Bongane Sithole                 | 219027546        | BS          |\n";
    cout << "+------------------------------------------------------------------+\n";
    normalText();
}

// ======================== MENU (CYAN) ========================
void showMenu() {
    cyanText();
    cout << "\n======================= MAIN MENU =======================\n";
    cout << "   1. Inventory System (section A)\n";
    cout << "   2. Linked list (section B)\n";
    cout << "   3. Stack operations (section C)\n";
    cout << "   4. Queue operations (section D)\n";
    cout << "   5. Reflection (section E)\n";
    cout << "   6. Bonus: circular linked list\n";
    cout << "   0. Exit\n";
    cout << "=========================================================\n";
    normalText();
    cout << "Enter your choice: ";
}

// ======================== YELLOW SECTION HEADING ========================
void sectionHeading(string title) {
    yellowText();
    cout << "\n========== " << title << " ==========\n";
    normalText();
}

// ======================== SECTION A ========================
// Product struct - like a database record for store items
struct Product {
    string name;
    int productID;
    double price;
    int quantity;
};

// prints inventory in a neat table format
void printInventory(Product items[], int count, string heading) {
    cout << "\n" << heading << "\n";
    cout << left << setw(12) << "ProductID"
        << setw(22) << "Name"
        << setw(12) << "Price"
        << setw(10) << "Quantity" << endl;
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < count; i++) {
        cout << left << setw(12) << items[i].productID
            << setw(22) << items[i].name
            << "R" << setw(10) << fixed << setprecision(2) << items[i].price
            << setw(10) << items[i].quantity << endl;
    }
}

// loops through all products and adds up price * quantity
double totalInventoryValue(Product items[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += items[i].price * items[i].quantity;
    }
    return total;
}

void sectionA() {
    // hardcoded product data as per assignment requirement
    // using vector to allow dynamic deletion (array size would be fixed)
    Product products[10] = {
        {"Laptop", 101, 12000.00, 5},
        {"Mouse", 102, 150.00, 20},
        {"Keyboard", 103, 350.00, 15},
        {"Monitor", 104, 2500.00, 8},
        {"Headphones", 105, 800.00, 12},
        {"Printer", 106, 3000.00, 4},
        {"USB Cable", 107, 50.00, 50},
        {"Webcam", 108, 600.00, 10},
        {"Tablet", 109, 5000.00, 6},
        {"Charger", 110, 200.00, 25}
    };
    int productCount = 10;  // track how many products are active

    printInventory(products, productCount, "Current Stock");

    // show total value of all inventory combined
    double totalVal = totalInventoryValue(products, productCount);
    greenText();
    cout << "\nSUCCESS: Total Inventory Value: R " << totalVal << endl;
    normalText();

    // ========== SEARCH FOR PRODUCT - keeps asking until valid number entered ==========
    int searchID;
    while (true) {
        cout << "\nEnter Product ID to search: ";
        if (cin >> searchID) {
            bool found = false;
            for (int i = 0; i < productCount; i++) {
                if (products[i].productID == searchID) {
                    greenText();
                    cout << "SUCCESS: Found product: " << products[i].name << endl;
                    normalText();
                    found = true;
                    break;
                }
            }
            if (!found) {
                redText();
                cout << "ERROR: Product ID " << searchID << " not found. Try again." << endl;
                normalText();
                continue;
            }
            break;
        }
        else {
            redText();
            cout << "ERROR: Invalid input. Please enter a numeric Product ID." << endl;
            normalText();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    // ========== UPDATE QUANTITY - keeps asking until valid product ID entered ==========
    int updateID, newQty;
    while (true) {
        cout << "\nEnter Product ID to update quantity: ";
        if (cin >> updateID) {
            bool found = false;
            int foundIndex = -1;
            for (int i = 0; i < productCount; i++) {
                if (products[i].productID == updateID) {
                    found = true;
                    foundIndex = i;
                    break;
                }
            }

            if (!found) {
                redText();
                cout << "ERROR: Product ID " << updateID << " not found. Try again." << endl;
                normalText();
                continue;
            }

            // product found, now ask for new quantity
            while (true) {
                cout << "Enter new quantity: ";
                if (cin >> newQty) {
                    if (newQty < 0) {
                        redText();
                        cout << "ERROR: Quantity cannot be negative. Try again." << endl;
                        normalText();
                        continue;
                    }
                    products[foundIndex].quantity = newQty;
                    greenText();
                    cout << "SUCCESS: Quantity updated for Product ID " << updateID << endl;
                    normalText();
                    break;
                }
                else {
                    redText();
                    cout << "ERROR: Invalid input. Please enter a numeric quantity." << endl;
                    normalText();
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }
            break;
        }
        else {
            redText();
            cout << "ERROR: Invalid input. Please enter a numeric Product ID." << endl;
            normalText();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    // ========== DELETE PRODUCT - NEW FEATURE ==========
    int deleteID;
    char confirm;
    while (true) {
        cout << "\nEnter Product ID to delete (or 0 to skip): ";
        if (cin >> deleteID) {
            if (deleteID == 0) {
                cout << "Skipping delete operation." << endl;
                break;
            }

            bool found = false;
            int foundIndex = -1;
            for (int i = 0; i < productCount; i++) {
                if (products[i].productID == deleteID) {
                    found = true;
                    foundIndex = i;
                    break;
                }
            }

            if (!found) {
                redText();
                cout << "ERROR: Product ID " << deleteID << " not found. Try again." << endl;
                normalText();
                continue;
            }

            // confirm deletion
            cout << "Are you sure you want to delete " << products[foundIndex].name
                << " (ID: " << deleteID << ")? (y/n): ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y') {
                // shift all products after foundIndex left by one
                for (int i = foundIndex; i < productCount - 1; i++) {
                    products[i] = products[i + 1];
                }
                productCount--;  // reduce product count
                greenText();
                cout << "SUCCESS: Product ID " << deleteID << " has been deleted from inventory." << endl;
                normalText();
            }
            else {
                greenText();
                cout << "SUCCESS: Deletion cancelled." << endl;
                normalText();
            }
            break;
        }
        else {
            redText();
            cout << "ERROR: Invalid input. Please enter a numeric Product ID." << endl;
            normalText();
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    printInventory(products, productCount, "Updated Stock");

    // recalculate total after update and possible deletion
    totalVal = totalInventoryValue(products, productCount);
    greenText();
    cout << "\nSUCCESS: Total Inventory after updates: R " << totalVal << endl;
    normalText();
}

// ======================== SECTION B ========================
// Node for linked list - each box holds data and points to next box
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {}  // constructor
};

class LinkedList {
private:
    ListNode* head;  // pointer to first node
public:
    LinkedList() : head(nullptr) {}  // empty list

    // adds new node at the end - walks to last node then attaches
    void insertAtEnd(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            ListNode* temp = head;
            while (temp->next != nullptr) {  // traverse to end
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // removes node with specific value - handles head and middle cases
    void deleteNode(int val) {
        try {
            if (head == nullptr) {
                throw runtime_error("List is empty");
            }

            // special case: deleting the first node
            if (head->data == val) {
                ListNode* toDelete = head;
                head = head->next;  // move head to next node
                delete toDelete;
                greenText();
                cout << "SUCCESS: Deleted " << val << " from list" << endl;
                normalText();
                return;
            }

            // search for node to delete (skip the one we want to remove)
            ListNode* current = head;
            while (current->next != nullptr && current->next->data != val) {
                current = current->next;
            }

            if (current->next == nullptr) {
                throw runtime_error("Value not found");
            }

            // bypass the node to delete
            ListNode* toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
            greenText();
            cout << "SUCCESS: Deleted " << val << " from list" << endl;
            normalText();
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
        }
    }

    // walks through list to see if value exists
    bool searchNode(int val) {
        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // prints all values with arrows between them
    void printList() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // destructor - cleans up memory to prevent leaks
    ~LinkedList() {
        while (head != nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

void sectionB() {
    LinkedList list;

    // build list: 10,20,30,40,50,60,70
    for (int i = 10; i <= 70; i += 10) {
        list.insertAtEnd(i);
    }

    cout << "Initial Linked List: ";
    list.printList();

    cout << "\nDeleting value 40..." << endl;
    list.deleteNode(40);

    cout << "Final Linked List: ";
    list.printList();

    cout << "\nSearching for value 80..." << endl;
    try {
        if (list.searchNode(80)) {
            greenText();
            cout << "SUCCESS: Value 80 found" << endl;
            normalText();
        }
        else {
            throw runtime_error("Value 80 not found");
        }
    }
    catch (const exception& e) {
        redText();
        cout << "ERROR: " << e.what() << endl;
        normalText();
    }
}

// ======================== SECTION C ========================
// Stack using array - fixed size 8, LIFO behavior
class Stack {
private:
    int arr[8];
    int top;  // index of top element (-1 when empty)
    const int SIZE = 8;
public:
    Stack() : top(-1) {}

    // adds element on top - checks for overflow first
    void push(int val) {
        try {
            if (top >= SIZE - 1) {
                throw overflow_error("Stack is full");
            }
            arr[++top] = val;  // increment top then insert
            greenText();
            cout << "SUCCESS: Pushed " << val << endl;
            normalText();
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
        }
    }

    // removes a specific value from anywhere in stack (not just top)
    // shifts all elements down to fill the gap
    void popSpecific(int target) {
        try {
            if (top < 0) {
                throw runtime_error("Stack is empty");
            }

            // find where the target is hiding
            int index = -1;
            for (int i = 0; i <= top; i++) {
                if (arr[i] == target) {
                    index = i;
                    break;
                }
            }

            if (index == -1) {
                throw runtime_error("Number not in stack");
            }

            // shift elements left to fill the hole
            for (int i = index; i < top; i++) {
                arr[i] = arr[i + 1];
            }
            top--;  // one less element now
            greenText();
            cout << "SUCCESS: Popped " << target << " from stack" << endl;
            normalText();
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
        }
    }

    // prints from top down (LIFO order)
    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() { return top < 0; }
    int getTop() { return top; }
    int getValue(int idx) { return arr[idx]; }  // peek inside without popping
};

void sectionC() {
    Stack myStack;

    srand(time(nullptr));  // seed random number generator
    cout << "Pushing 8 random numbers (0-50)..." << endl;
    for (int i = 0; i < 8; i++) {
        int randomVal = rand() % 51;  // 0 to 50 inclusive
        myStack.push(randomVal);
    }

    cout << "\nBefore pop operation:" << endl;
    myStack.display();

    int numToPop;
    while (true) {
        cout << "\nEnter number to pop (0-50): ";
        cin >> numToPop;

        // check if exists without modifying stack
        bool exists = false;
        for (int i = 0; i <= myStack.getTop(); i++) {
            if (myStack.getValue(i) == numToPop) {
                exists = true;
                break;
            }
        }

        if (exists) {
            myStack.popSpecific(numToPop);
            break;
        }
        else {
            redText();
            cout << "ERROR: " << numToPop << " not found. Try again." << endl;
            normalText();
        }
    }

    cout << "\nAfter pop operation:" << endl;
    myStack.display();
}

// ======================== SECTION D ========================
// Node for queue - each person in line
struct QueueNode {
    int data;
    QueueNode* next;
    QueueNode(int val) : data(val), next(nullptr) {}
};

// Queue using linked list - FIFO behavior (first in, first out)
class Queue {
private:
    QueueNode* front;  // where people leave from
    QueueNode* rear;   // where people join
public:
    Queue() : front(nullptr), rear(nullptr) {}

    // add to back of line
    void enqueue(int val) {
        QueueNode* newNode = new QueueNode(val);
        if (rear == nullptr) {
            front = rear = newNode;  // first person in line
        }
        else {
            rear->next = newNode;  // attach to end
            rear = newNode;        // update rear pointer
        }
        greenText();
        cout << "SUCCESS: Enqueued " << val << endl;
        normalText();
    }

    // remove from front of line
    int dequeue() {
        try {
            if (isEmpty()) {
                throw runtime_error("Queue is empty");
            }
            int val = front->data;
            QueueNode* temp = front;
            front = front->next;  // move front pointer
            if (front == nullptr) {
                rear = nullptr;  // queue became empty
            }
            delete temp;
            return val;
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
            return -1;
        }
    }

    // removes specific value from anywhere in queue (not just front)
    void dequeueSpecific(int target) {
        try {
            if (isEmpty()) {
                throw runtime_error("Queue is empty");
            }

            // if it's at the front, just dequeue normally
            if (front->data == target) {
                int removed = dequeue();
                greenText();
                cout << "SUCCESS: Dequeued " << removed << " from front" << endl;
                normalText();
                return;
            }

            // search for target in the middle/end
            QueueNode* current = front;
            while (current->next != nullptr && current->next->data != target) {
                current = current->next;
            }

            if (current->next == nullptr) {
                throw runtime_error("Value not found in queue");
            }

            // bypass the node to remove
            QueueNode* toDelete = current->next;
            current->next = current->next->next;
            if (toDelete == rear) {
                rear = current;  // removed last element, update rear
            }
            delete toDelete;
            greenText();
            cout << "SUCCESS: Dequeued " << target << endl;
            normalText();
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
        }
    }

    // look at front without removing
    int peek() {
        try {
            if (isEmpty()) {
                throw runtime_error("Queue is empty");
            }
            return front->data;
        }
        catch (const exception& e) {
            redText();
            cout << "ERROR: " << e.what() << endl;
            normalText();
            return -1;
        }
    }

    bool isEmpty() { return front == nullptr; }

    // print all from front to rear
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue (front to rear): ";
        QueueNode* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

void sectionD() {
    Queue myQueue;

    // build initial queue: 5,10,15,...,50
    for (int i = 5; i <= 50; i += 5) {
        myQueue.enqueue(i);
    }

    cout << "\nInitial Queue:" << endl;
    myQueue.display();

    cout << "\nEnqueuing 60..." << endl;
    myQueue.enqueue(60);
    myQueue.display();

    cout << "\nDequeuing specific value 25..." << endl;
    myQueue.dequeueSpecific(25);
    myQueue.display();

    cout << "\nFront element: " << myQueue.peek() << endl;
}

// ======================== SECTION E ========================
void sectionE() {
    cout << "\nWHY LINKED LISTS ARE BETTER THAN ARRAYS FOR DYNAMIC MEMORY:\n";
    cout << "Arrays need you to know the size beforehand. If you guess wrong,\n";
    cout << "you either waste memory or run out of space. Linked lists grow\n";
    cout << "and shrink as needed. Each new node is created only when you need it.\n";
    cout << "\nReal-life examples:\n";
    cout << "- Music playlist: you can add or remove songs anywhere without\n";
    cout << "  moving all the other songs around.\n";
    cout << "- Browser history: each page links to the next and previous one.\n";
    cout << "- Train: each carriage is connected to the next one.\n";
    cout << "\nWHY STACKS AND QUEUES ARE USEFUL:\n";
    cout << "Stack (LIFO - Last In First Out):\n";
    cout << "- Undo/Redo in Word or Photoshop\n";
    cout << "- Back button in web browsers\n";
    cout << "- Function calls in programming\n";
    cout << "- Plate dispenser in a cafeteria\n";
    cout << "\nQueue (FIFO - First In First Out):\n";
    cout << "- Printer queue (documents wait their turn)\n";
    cout << "- Customer service line\n";
    cout << "- CPU task scheduling\n";
    cout << "- Ticket counter at a cinema\n";
}

// ======================== BONUS ========================
// Node for circular linked list - last node points back to first
struct CircleNode {
    int data;
    CircleNode* next;
    CircleNode(int val) : data(val), next(nullptr) {}
};

class CircularList {
private:
    CircleNode* head;
public:
    CircularList() : head(nullptr) {}

    // insert - if empty, points to itself. otherwise, find tail and connect
    void insert(int val) {
        CircleNode* newNode = new CircleNode(val);
        if (head == nullptr) {
            head = newNode;
            head->next = head;  // points to itself (circular!)
        }
        else {
            CircleNode* temp = head;
            while (temp->next != head) {  // walk until we reach the node before head
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;  // complete the circle
        }
    }

    // show we can go around twice - proves it's circular
    void traverseTwice() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        // count how many nodes first
        int count = 0;
        CircleNode* temp = head;
        do {
            count++;
            temp = temp->next;
        } while (temp != head);

        // first lap
        temp = head;
        cout << "First traversal: ";
        for (int i = 0; i < count; i++) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "(back to head)" << endl;

        // second lap - continues from where first lap ended
        cout << "Second traversal: ";
        for (int i = 0; i < count; i++) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "(back to head)" << endl;
    }

    ~CircularList() {
        if (head == nullptr) return;
        CircleNode* current = head->next;
        while (current != head) {
            CircleNode* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }
};

void bonusSection() {
    CircularList clist;

    int values[] = { 21, 15, 7, 33, 46 };
    for (int i = 0; i < 5; i++) {
        clist.insert(values[i]);
    }

    clist.traverseTwice();
}

// ======================== MAIN ========================
int main() {
    showGroupTable();

    int choice;
    do {
        showMenu();

        // input validation - catches letters like "K" so program doesn't crash
        if (!(cin >> choice)) {
            redText();
            cout << "\nERROR: Invalid input. Please enter a number (0-6).\n";
            normalText();
            cin.clear();               // clears the error flag
            cin.ignore(10000, '\n');   // discards the bad input
            continue;                  // back to menu, don't terminate
        }

        switch (choice) {
        case 1:
            sectionHeading("SECTION A: INVENTORY SYSTEM");
            sectionA();
            break;
        case 2:
            sectionHeading("SECTION B: LINKED LIST");
            sectionB();
            break;
        case 3:
            sectionHeading("SECTION C: STACK OPERATIONS");
            sectionC();
            break;
        case 4:
            sectionHeading("SECTION D: QUEUE OPERATIONS");
            sectionD();
            break;
        case 5:
            sectionHeading("SECTION E: REFLECTION");
            sectionE();
            break;
        case 6:
            sectionHeading("BONUS: CIRCULAR LINKED LIST");
            bonusSection();
            break;
        case 0:
            greenText();
            cout << "\nSUCCESS: Program terminated. Goodbye!\n";
            normalText();
            break;
        default:
            redText();
            cout << "\nERROR: Invalid choice. Please enter 0-6.\n";
            normalText();
        }
    } while (choice != 0);

    return 0;
}