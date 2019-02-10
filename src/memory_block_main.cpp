//========================================================================
// FILE:
//  memory_block_main.cpp
//
// AUTHOR:
//    banach-space@github
//
// DESCRIPTION:
//    Sample usage of MemoryBlock.
//
// License: MIT
//========================================================================
#include <vector>

#include "memory_block.hpp"

int main() {
  // Create a vector object and add a few elements to it.
  std::vector<MemoryBlock> v;
  v.push_back(MemoryBlock(25));
  v.push_back(MemoryBlock(75));

  // Insert a new element into the second position of the vector.
  v.insert(v.begin() + 1, MemoryBlock(50));
}
