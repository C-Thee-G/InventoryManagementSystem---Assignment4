

                          ╔═══════════════════════════╗
                          ║   ASSIGNMENT 4 - 2026     ║
                          ║  DATA STRUCTURES SHOWDOWN ║
                          ╚═══════════════════════════╝

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 👥 GROUP MEMBERS

╔════════════════════════════════╦═══════════════╦════════════╗
║        STUDENT NAME            ║ STUDENT NUMBER║  INITIALS  ║
╠════════════════════════════════╬═══════════════╬════════════╣
║ Mongiwethu Eddy Ncube          ║ 221152725     ║    MEN     ║
║ Sandile Sibeko                 ║ 220115085     ║    SS      ║
║ Keamogetse Selebano            ║ 220068905     ║    KS      ║
║ Ndzulamo Michelle Yingwani     ║ 220122253     ║    NMY     ║
║ Hlonipho Nersely Bila          ║ 220080694     ║    HNB     ║
║ Zizile Ezona Mbanqi            ║ 220061777     ║    ZEM     ║
║ Bongane Sithole                ║ 219027546     ║    BS      ║
╚════════════════════════════════╩═══════════════╩════════════╝

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📚 TABLE OF CONTENTS

| # | Section |
|---|---------|
| 1 | [Project Overview](#-project-overview) |
| 2 | [Features](#-features) |
| 3 | [Requirements](#-requirements) |
| 4 | [How to Compile](#-how-to-compile) |
| 5 | [How to Run](#-how-to-run) |
| 6 | [Program Structure](#-program-structure) |
| 7 | [Sections Explained](#-sections-explained) |
| 8 | [Error Handling](#-error-handling) |
| 9 | [Sample Output](#-sample-output) |
| 10 | [Known Issues](#-known-issues) |
| 11 | [References](#-references) |

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 🚀 PROJECT OVERVIEW

```
    ╔═══════════════════════════════════════════════════════════════════╗
    ║                                                                   
    ║   This program is a comprehensive data structures assignment      
    ║   that demonstrates the implementation of:                        
    ║                                                                   
    ║      📦 Inventory Management System (Arrays of structs)           
    ║      🔗 Singly Linked List                                        
    ║      📚 Stack (Array-based)                                       
    ║      🚶 Queue (Linked List-based)                                 
    ║      🔄 Circular Linked List (Bonus)                              
    ║                                                                   
    ╚═══════════════════════════════════════════════════════════════════╝
```

The program features a **menu-driven interface** where users can select which section to run. Each section includes input validation, error handling with try-catch blocks, and colour-coded output:

| Colour | Meaning |
|--------|---------|
| 🟢 GREEN | Success messages |
| 🔴 RED | Error messages |
| 🟡 YELLOW | Headings, tables, section titles |
| 🔵 CYAN | Menu options |

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## ⚙️ FEATURES

### 📦 Section A: Inventory System
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Display all products in a formatted table                    │
│  ✓ Calculate total inventory value (price × quantity)           │
│  ✓ Search for product by ID (with input validation)             │
│  ✓ Update product quantity (no negative values allowed)         │
│  ✓ DELETE product from inventory (with confirmation prompt)     │
│  ✓ Handles non-numeric input gracefully                         │
└─────────────────────────────────────────────────────────────────┘
```

### 🔗 Section B: Linked List
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Create linked list: 10 → 20 → 30 → 40 → 50 → 60 → 70        
│  ✓ Delete a specific value (40)                                 
│  ✓ Search for a value (80)                                      
│  ✓ Display list with arrow formatting                           
└─────────────────────────────────────────────────────────────────┘
```

### 📚 Section C: Stack Operations
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Generate 8 random numbers (0-50)                             │
│  ✓ Push onto stack                                              │
│  ✓ Pop specific element from anywhere in stack                  │
│  ✓ Display stack from top to bottom                             │
│  ✓ Input validation for non-existent numbers                    │
└─────────────────────────────────────────────────────────────────┘
```

### 🚶 Section D: Queue Operations
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Create queue: 5, 10, 15, 20, 25, 30, 35, 40, 45, 50         
│  ✓ Enqueue new value (60)                                       
│  ✓ Dequeue specific value (25)                                  
│  ✓ Display queue from front to rear                             
│  ✓ Peek at front element                                        
└─────────────────────────────────────────────────────────────────┘
```

### 💭 Section E: Reflection
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Written explanation of linked lists vs arrays                │
│  ✓ Real-life examples of linked lists                           │
│  ✓ Real-life examples of stacks and queues                      │
└─────────────────────────────────────────────────────────────────┘
```

### 🔄 Bonus: Circular Linked List
```
┌─────────────────────────────────────────────────────────────────┐
│  ✓ Insert values: 21, 15, 7, 33, 46                             │
│  ✓ Traverse the list twice to prove circular nature             │
│  ✓ Last node points back to head                                │
└─────────────────────────────────────────────────────────────────┘
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 💻 REQUIREMENTS

```
╔══════════════════════════════════════════════════════════════════╗
║  • C++11 or higher compiler (g++, clang++, MSVC)                 ║
║  • Terminal/Command Prompt that supports ANSI colour codes       ║
║                                                                  ║
║    Linux/Mac:     Native support ✅                              ║
║    Windows 10+:   Windows Terminal or Git Bash recommended       ║
╚══════════════════════════════════════════════════════════════════╝
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 🔧 HOW TO COMPILE

### 🐧 Linux / Mac (g++)

```bash
g++ -std=c++11 APM11A1_Assignment4.cpp -o assignment4
```

### 🐧 Linux / Mac (with warnings)

```bash
g++ -std=c++11 -Wall -Wextra APM11A1_Assignment4.cpp -o assignment4
```

### 🪟 Windows (MinGW)

```bash
g++ -std=c++11 APM11A1_Assignment4.cpp -o assignment4.exe
```

### 🪟 Windows (Visual Studio)

```bash
cl /EHsc /std:c++11 APM11A1_Assignment4.cpp
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 🏃 HOW TO RUN

### 🐧 Linux / Mac

```bash
./assignment4
```

### 🪟 Windows

```bash
assignment4.exe
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📁 PROGRAM STRUCTURE

```
APM11A1_Assignment4.cpp
│
├── 🎨 Colour Helper Functions
│   ├── greenText()   → 🟢 SUCCESS messages
│   ├── redText()     → 🔴 ERROR messages
│   ├── yellowText()  → 🟡 Headings and table
│   ├── cyanText()    → 🔵 Menu
│   └── normalText()  → ⚪ Reset colour
│
├── 👥 showGroupTable()    → Displays group member table (Yellow)
├── 📋 showMenu()          → Main menu (Cyan)
├── 📌 sectionHeading()    → Yellow section titles
│
├── 📦 SECTION A (Inventory)
│   ├── struct Product
│   ├── printInventory()
│   ├── totalInventoryValue()
│   └── sectionA()
│
├── 🔗 SECTION B (Linked List)
│   ├── struct ListNode
│   ├── class LinkedList
│   └── sectionB()
│
├── 📚 SECTION C (Stack)
│   ├── class Stack
│   └── sectionC()
│
├── 🚶 SECTION D (Queue)
│   ├── struct QueueNode
│   ├── class Queue
│   └── sectionD()
│
├── 💭 SECTION E (Reflection)
│   └── sectionE()
│
├── 🔄 BONUS (Circular Linked List)
│   ├── struct CircleNode
│   ├── class CircularList
│   └── bonusSection()
│
└── 🏁 main()
    ├── Input validation loop
    ├── Menu selection
    └── Section execution
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📖 SECTIONS EXPLAINED

### 📦 Section A Menu Flow

```
┌─────────────────────────────────────────────────────────────────┐
│  1. Display current inventory table                             │
│  2. Show total inventory value                                  │
│  3. Prompt for Product ID to search (loops until valid)         │
│  4. Prompt for Product ID to update (loops until valid)         │
│  5. Prompt for new quantity (loops until valid, no negatives)   │
│  6. Prompt for Product ID to delete (optional, enter 0 to skip) │
│  7. Confirm deletion (y/n)                                      │
│  8. Display updated inventory                                   │
│  9. Show new total inventory value                              │
└─────────────────────────────────────────────────────────────────┘
```

### 🔗 Section B Menu Flow

```
┌─────────────────────────────────────────────────────────────────┐
│  1. Create list: 10→20→30→40→50→60→70                           │
│  2. Display initial list                                        │
│  3. Delete value 40                                             │
│  4. Display final list                                          │
│  5. Search for value 80 (displays not found message)            │
└─────────────────────────────────────────────────────────────────┘
```

### 📚 Section C Menu Flow

```
┌─────────────────────────────────────────────────────────────────┐
│  1. Generate 8 random numbers (0-50)                            │
│  2. Push all onto stack                                         │
│  3. Display stack (top to bottom)                               │
│  4. Prompt for number to pop (loops until valid)                │
│  5. Remove that number from anywhere in stack                   │
│  6. Display updated stack                                       │
└─────────────────────────────────────────────────────────────────┘
```

### 🚶 Section D Menu Flow

```
┌─────────────────────────────────────────────────────────────────┐
│  1. Create queue: 5,10,15,20,25,30,35,40,45,50                  │
│  2. Display initial queue                                       │
│  3. Enqueue 60                                                  │
│  4. Display queue after enqueue                                 │
│  5. Dequeue specific value 25                                   │
│  6. Display final queue                                         │
│  7. Display front element                                       │
└─────────────────────────────────────────────────────────────────┘
```

### 🔄 Bonus Section Flow

```
┌─────────────────────────────────────────────────────────────────┐
│  1. Insert 21,15,7,33,46 into circular list                     │
│  2. Traverse list twice to show circular nature                 │
│  3. Display both traversals                                      │
└─────────────────────────────────────────────────────────────────┘
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## ⚠️ ERROR HANDLING

The program uses try-catch blocks and input validation to handle:

| Error Type | Handling Method |
|------------|-----------------|
| 🔴 Non-numeric input (e.g., "rr") | `cin.clear()` + `cin.ignore()` + loop retry |
| 🔴 Product ID not found | Error message + loop retry |
| 🔴 Negative quantity | Error message + loop retry |
| 🔴 Stack overflow | try-catch with overflow_error |
| 🔴 Queue empty | try-catch with runtime_error |
| 🔴 Invalid menu choice | Error message + loop retry |
| 🔴 Invalid stack pop | Loop retry until valid |

### 🎨 Colour Coding

```
╔══════════════════════════════════════════════════════════════════╗
║  🟢 GREEN    = Success messages (operation completed)            ║
║  🔴 RED      = Error messages (something went wrong)             ║
║  🟡 YELLOW   = Headings, tables, section titles                  ║
║  🔵 CYAN     = Menu options                                       ║
╚══════════════════════════════════════════════════════════════════╝
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📺 SAMPLE OUTPUT

```
╔══════════════════════════════════════════════════════════════════╗
║                    APM11A1 ASSIGNMENT 4                          ║
║                    DATA STRUCTURES                               ║
╠══════════════════════════════════════════════════════════════════╣
║ STUDENT NAME                    | STUDENT NUMBER   | INITIALS    ║
╠══════════════════════════════════════════════════════════════════╣
║ Mongiwethu Eddy Ncube           | 221152725        | MEN         ║
║ Sandile Sibeko                  | 220115085        | SS          ║
║ Keamogetse Selebano             | 220068905        | KS          ║
║ Ndzulamo Michelle Yingwani      | 220122253        | NMY         ║
║ Hlonipho Nersely Bila           | 220080694        | HNB         ║
║ Zizile Ezona Mbanqi             | 220061777        | ZEM         ║
║ Bongane Sithole                 | 219027546        | BS          ║
╚══════════════════════════════════════════════════════════════════╝

======================= MAIN MENU =======================
   1. Inventory System (section A)
   2. Linked list (section B)
   3. Stack operations (section C)
   4. Queue operations (section D)
   5. Reflection (section E)
   6. Bonus: circular linked list
   0. Exit
=========================================================
Enter your choice: 1

========== SECTION A: INVENTORY SYSTEM ==========

Current Stock
ProductID   Name                  Price       Quantity
------------------------------------------------
101         Laptop                R12000.00  5
102         Mouse                 R150.00    20
103         Keyboard              R350.00    15
104         Monitor               R2500.00   8
105         Headphones            R800.00    12
106         Printer               R3000.00   4
107         USB Cable             R50.00     50
108         Webcam                R600.00    10
109         Tablet                R5000.00   6
110         Charger               R200.00    25

SUCCESS: Total Inventory Value: R 153350.00

Enter Product ID to search: 101
SUCCESS: Found product: Laptop

Enter Product ID to update quantity: 101
Enter new quantity: 50
SUCCESS: Quantity updated for Product ID 101

Enter Product ID to delete (or 0 to skip): 105
Are you sure you want to delete Headphones (ID: 105)? (y/n): y
SUCCESS: Product ID 105 has been deleted from inventory.

Updated Stock
ProductID   Name                  Price       Quantity
------------------------------------------------
101         Laptop                R12000.00  50
102         Mouse                 R150.00    20
103         Keyboard              R350.00    15
104         Monitor               R2500.00   8
106         Printer               R3000.00   4
107         USB Cable             R50.00     50
108         Webcam                R600.00    10
109         Tablet                R5000.00   6
110         Charger               R200.00    25

SUCCESS: Total Inventory after updates: R 665350.00
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 🐛 KNOWN ISSUES

| Issue | Solution |
|-------|----------|
| 🎨 Colours not showing on Windows | Use Windows Terminal or Git Bash instead of old Command Prompt |
| 📦 Array size limitation (Section A) | Fixed array of size 10 - deletion reduces visible count only |
| 🎲 Random numbers change each run | Normal behaviour due to `srand(time(nullptr))` |

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📚 REFERENCES

The following resources were used to help code this entire assessment:

### 📖 Textbooks & Academic Sources
1. **Deitel, P. & Deitel, H.** (2017). *C++ How to Program*. 10th Edition. Pearson Education.
   - Chapters on Arrays (Ch 7), Pointers (Ch 8), Classes (Ch 9), Linked Lists (Ch 12)

2. **Lippman, S.B., Lajoie, J. & Moo, B.E.** (2013). *C++ Primer*. 5th Edition. Addison-Wesley.
   - Exception handling (Ch 5.6), Dynamic memory management (Ch 12)

3. **Stroustrup, B.** (2013). *The C++ Programming Language*. 4th Edition. Addison-Wesley.
   - Data structures implementation (Ch 29-31)

### 🌐 Online Resources
4. **cppreference.com** - C++ Standard Library Reference
   - https://en.cppreference.com/w/
   - Used for: `std::setw()`, `std::left`, exception handling syntax

5. **GeeksforGeeks** - Data Structures Tutorials
   - https://www.geeksforgeeks.org/data-structures/
   - Used for: Linked list implementation, stack with array, queue with linked list, circular linked list

6. **Stack Overflow** - Community Q&A
   - https://stackoverflow.com/
   - Used for: ANSI colour codes in C++, `cin.clear()` and `cin.ignore()` input validation

7. **Programiz** - C++ Programming Tutorials
   - https://www.programiz.com/cpp-programming
   - Used for: Structs, classes, constructors/destructors

8. **LearnCpp.com** - Modern C++ Tutorials
   - https://www.learncpp.com/
   - Used for: Try-catch blocks, dynamic memory allocation (new/delete)

### 🛠️ Tools Used
9. **Visual Studio Code** - Code Editor with C++ extensions
10. **GCC (g++)** - Compiler for testing and debugging
11. **Git Bash** - Terminal emulator for Windows colour support

### 📝 Assignment-Specific Resources
12. **University of Johannesburg** - APM11A1 Learning Unit 4: Data Structures
13. **Sample Output provided** in assignment brief - Used for formatting and validation
14. **C++ Colour Codes (ANSI escape sequences)** - `\033[32m`, `\033[31m`, `\033[33m`, `\033[36m`, `\033[0m`

### 👥 Group Contributions
15. **Mongiwethu Eddy Ncube (MEN)** - Inventory system logic, struct implementation
16. **Sandile Sibeko (SS)** - Linked list and stack implementation
17. **Keamogetse Selebano (KS)** - Queue operations and validation
18. **Ndzulamo Michelle Yingwani (NMY)** - Circular linked list bonus section
19. **Hlonipho Nersely Bila (HNB)** - Error handling and try-catch blocks
20. **Zizile Ezona Mbanqi (ZEM)** - Input validation and colour coding
21. **Bongane Sithole (BS)** - Menu system and program integration

### 📌 Special Thanks
- **Stack Overflow user "Remy Lebeau"** - ANSI colour codes explanation
- **GeeksforGeeks article "Delete a node in Linked List"** - Deletion algorithm
- **cppreference.com "std::invalid_argument"** - Exception handling examples

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📞 CONTACT

For questions or clarifications, contact any group member listed in the table above.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 📅 VERSION HISTORY

| Version | Date | Changes |
|---------|------|---------|
| v1.0 | 16 April 2026 | Initial release |
| v1.1 | 26 April 2026 | Added delete function to Section A |
| v1.2 | 26 April 2026 | Added input validation loops |
| v1.3 | 26 April 2026 | Added colour coding |
| v1.4 | 26 April 2026 | Added references and ASCII art |

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

## 🙏 ACKNOWLEDGEMENTS

- **University of Johannesburg** - APM11A1 Module
- **Learning Unit 4: Data Structures**
- **All 7 group members** for their hard work and dedication
- **Prof. Mr David Chuku Taole** - For guidance and support

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

```
╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║                         THE END                                  ║
║                                                                  ║
║              ╔════════════════════════════════════╗              ║
║              ║    THANK YOU FOR USING OUR PROGRAM  ║              ║
║              ╚════════════════════════════════════╝              ║
║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝
```

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```
