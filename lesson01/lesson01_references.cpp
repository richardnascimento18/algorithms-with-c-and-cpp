/*
 * Lesson 01 — References and Pointer References
 *
 * OBJECTIVES:
 * 1. Understand C++ references.
 * 2. Modify an object through a reference.
 * 3. Modify a pointer through a reference to pointer.
 * 4. Compare C pointers with C++ references.
 *
 * EXERCISE:
 *
 * Implement the following functions:
 *
 * 1. set_value():
 *    Modify the original integer using a reference.
 *
 * 2. redirect():
 *    Change the caller's pointer using a reference
 *    to a pointer.
 *
 * RULES:
 * - Do not modify main().
 * - Do not use global variables.
 * - Complete only the TODO sections.
 */

#include <cassert>
#include <iostream>

/*
 * TODO 1:
 * Change the referenced integer to new_value.
 */
void set_value(int &value, int new_value) { value = new_value; }

/*
 * TODO 2:
 * Change ptr so it points to target.
 */
void redirect(int *&ptr, int &target) { ptr = &target; }

int main() {
  int x = 10;
  int y = 100;

  int *ptr = &x;

  // Test 1: Modify x through a reference
  set_value(x, 50);

  assert(x == 50);

  // Test 2: Redirect ptr to y
  redirect(ptr, y);

  assert(ptr == &y);
  assert(*ptr == 100);

  // Test 3: Ensure x remains unchanged
  assert(x == 50);

  std::cout << "All C++ tests passed!\n";
}
