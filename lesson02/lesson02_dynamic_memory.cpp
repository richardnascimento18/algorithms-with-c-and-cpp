/*
 * Lesson 02 — Dynamic Memory and Ownership in C++
 *
 * OBJECTIVES:
 * 1. Allocate an array using std::make_unique.
 * 2. Initialize dynamically allocated elements.
 * 3. Return ownership of an allocated array.
 * 4. Understand automatic resource cleanup.
 *
 * TASK:
 * Implement make_squares().
 *
 * Expected contents for count = 5:
 * [0, 1, 4, 9, 16]
 *
 * REQUIREMENTS:
 * - Use std::make_unique<int[]>().
 * - Use std::size_t for the loop index.
 * - Initialize every element.
 * - Return the owning smart pointer.
 * - Do not use raw new, delete, malloc or free.
 * - Do not modify main().
 * - Assume all squares fit in int.
 */

#include <cassert>
#include <cstddef>
#include <iostream>
#include <memory>

std::unique_ptr<int[]> make_squares(std::size_t count) {
  // TODO 1:
  // Allocate an array containing count integers.
  // Remember: make_unique receives an element
  // count, not a byte count.
  std::unique_ptr<int[]> numberArray = std::make_unique<int[]>(count);

  // TODO 2:
  // Iterate through all valid array indices
  // and assign their squares.
  for (std::size_t i = 0; i < count; i++) {
    numberArray[i] = (int)(i * i);
  }

  // TODO 3:
  // Return the local unique_ptr variable.
  return numberArray;
}

int main() {
  auto numbers = make_squares(5);

  assert(numbers != nullptr);

  assert(numbers[0] == 0);
  assert(numbers[1] == 1);
  assert(numbers[2] == 4);
  assert(numbers[3] == 9);
  assert(numbers[4] == 16);

  std::cout << "C++ dynamic memory tests passed!\n";

  // Automatic resource cleanup.
}
