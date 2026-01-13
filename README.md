# Random Number Gap Generator

This project implements a constraint-based random number generator in C. It solves the problem of generating a sequence of numbers where every element must maintain a minimum "safe distance" from every other element.

## ⚙️ Algorithm Logic

1.  **Range Definition:** Generates integers strictly within `[10, 70]`.
2.  **Constraint:** checks that for every new number $x_{new}$ and existing number $x_{i}$:
    $$|x_{new} - x_{i}| > 5$$
3.  **Conflict Resolution:** If a generated number violates the gap rule (difference $\le 5$), it is discarded, and a new number is generated (Retry mechanism).

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o gap_gen
    ```
2.  Run the executable:
    ```bash
    ./gap_gen
    ```
3.  Enter the count of numbers ($N$).

**Note:** If $N$ is too large, the program may not find enough numbers that satisfy the gap condition within the limited range.

---
*This repository demonstrates brute-force validation and random sampling in C.*
