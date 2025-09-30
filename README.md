# Debugging Portfolio

This repository showcases my hands-on debugging projects in C and C++.  
Each project includes the original buggy code, the corrected code, and detailed debugging notes documenting the **symptoms, root cause, fix, and lessons learned**.  

The goal of this portfolio is to demonstrate my ability to investigate issues, apply structured debugging techniques, and deliver stable, maintainable solutions.

---

## 🔹 Projects

### 1. [Memory Leak Investigation](memory-leak-investigation/)
- **Problem:** Program’s memory usage grew continuously during runtime.  
- **Debugging Tools:** Valgrind, GDB  
- **Root Cause:** `malloc()` calls without corresponding `free()` operations.  
- **Fix:** Added proper deallocation and restructured loop memory handling.  
- **Lesson Learned:** Always validate heap management with Valgrind before production deployment.  

---

### 2. [Segmentation Fault (Null Pointer Dereference)](segfault-null-pointer/)
- **Problem:** Program crashed with a segmentation fault when dereferencing pointers.  
- **Debugging Tools:** GDB (backtraces)  
- **Root Cause:** Null pointer was dereferenced without validation.  
- **Fix:** Added null-checks and safeguards to prevent invalid memory access.  
- **Lesson Learned:** Always validate input and memory references before use.  

---

### 3. [Logic Bug in Sorting Algorithm](logic-bug-sorting/)
- **Problem:** Custom quicksort function produced incorrect output.  
- **Debugging Tools:** Print statements, step debugging  
- **Root Cause:** Incorrect comparison logic inside partitioning step.  
- **Fix:** Corrected conditionals and verified against test datasets.  
- **Lesson Learned:** Even simple algorithms require edge-case testing.  

---

### 4. [Multi-threading Race Condition](multi-threading-race-condition/)
- **Problem:** Inconsistent behavior when multiple threads updated shared data.  
- **Debugging Tools:** GDB (thread mode), logging  
- **Root Cause:** Lack of synchronization across threads accessing shared memory.  
- **Fix:** Implemented mutex locks to ensure proper synchronization.  
- **Lesson Learned:** Always design for concurrency safety in multithreaded applications.  

---

### 5. [Array Bounds Breach](array-bounds-breach/)
- **Problem:** Program experienced crashes and unpredictable behavior due to buffer overflow.  
- **Debugging Tools:** GDB, print-based debugging  
- **Root Cause:** Out-of-range array indexing exceeded allocated memory.  
- **Fix:** Introduced boundary checks and safer iteration patterns.  
- **Lesson Learned:** Always validate index ranges when working with arrays in C.  

---

### 6. [Division by Zero Crash Investigation](division-by-zero-crash/)
- **Problem:** Program terminated unexpectedly when dividing integers.  
- **Debugging Tools:** GDB, runtime tests  
- **Root Cause:** Input values allowed division by zero without safeguards.  
- **Fix:** Implemented input validation to block zero denominators before division.  
- **Lesson Learned:** Input sanitization is critical to prevent runtime crashes.  

---

## 🔧 Skills Demonstrated
- C & C++ Debugging  
- GDB, Valgrind, and Print-based Debugging  
- Memory Management & Pointers  
- Algorithm Debugging & Validation  
- Multi-threaded Programming & Synchronization  
- Defensive Programming & Input Validation  
- Root Cause Analysis & Documentation  

---

## 📌 How to Use
Each project folder contains:
- `buggy_code.c` or `.cpp` → original code with errors  
- `fix_code.c` or `.cpp` → corrected version  
- `project scenario doc file` → detailed explanation of the scenario, buggy code, fixed code, lessons learned, and tools used

---

## 🎯 Purpose
This portfolio is designed to showcase not just **technical debugging ability**, but also **methodical thinking, documentation, and problem-solving skills** that can be applied in professional environments.  
