#include "template.h"
#include <iostream>
#include <vector>

using namespace sjtu;

int main() {
    // The OJ will test the implementation
    // This is a simple test harness
    resetMemory();

    // Test basic allocation
    MemoryBlock* b1 = allocate(1024);
    if (b1) {
        std::cout << "Allocated block at address: " << b1->address << " size: " << b1->size << std::endl;
    }

    // Test deallocation
    deallocate(b1);

    return 0;
}
