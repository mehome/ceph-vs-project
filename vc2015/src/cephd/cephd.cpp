
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include <Windows.h>
#include <atomic>

int main(int argc, char * argv[])
{
    std::atomic<int> counter;
    counter.fetch_add(1, std::memory_order_seq_cst);
    counter.fetch_add(1, std::memory_order_seq_cst);

    MemoryBarrier();
    return 0;
}
