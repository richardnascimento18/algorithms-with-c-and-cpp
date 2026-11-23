/*
 * Lesson 01 — Reinforcement: Pointer Indirection
 *
 * OBJECTIVE:
 * Practice modifying a pointer and then modifying
 * the integer object it points to.
 *
 * TASK:
 * Implement change_target_and_value().
 *
 * REQUIREMENTS:
 * 1. Make the caller's pointer point to target.
 * 2. Set the integer at that target to new_value.
 * 3. Do not modify main().
 * 4. Assume all pointers are valid.
 */

#include <assert.h>
#include <stdio.h>

void change_target_and_value(int **slot, int *target, int new_value) {
  // TODO 1: Redirect the caller's pointer.
  *slot = target;

  // TODO 2: Modify the newly pointed-to integer
  // using slot.
  **slot = new_value;
}

int main(void) {
  int x = 10;
  int y = 20;
  int *ptr = &x;

  change_target_and_value(&ptr, &y, 77);

  assert(ptr == &y);
  assert(y == 77);
  assert(x == 10);

  printf("C reinforcement passed!\n");
  return 0;
}
