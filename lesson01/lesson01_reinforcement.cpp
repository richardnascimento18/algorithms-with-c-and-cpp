/*
 * Lesson 01 — Reinforcement: Pointer References
 *
 * OBJECTIVE:
 * Practice using a reference to a pointer.
 *
 * TASK:
 * Implement change_target_and_value().
 *
 * REQUIREMENTS:
 * 1. Redirect the caller's pointer to target.
 * 2. Modify the newly pointed-to integer.
 * 3. Do not modify main().
 */

#include <cassert>
#include <iostream>

void change_target_and_value(int *&slot, int &target, int new_value) {
  // TODO 1: Redirect the caller's pointer.
  slot = &target;

  // TODO 2: Modify the integer through slot.
  *slot = new_value;
}

int main() {
  int x = 10;
  int y = 20;
  int *ptr = &x;

  change_target_and_value(ptr, y, 77);

  assert(ptr == &y);
  assert(y == 77);
  assert(x == 10);

  std::cout << "C++ reinforcement passed!\n";
}
