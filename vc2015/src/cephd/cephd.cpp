
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include <Windows.h>
#include <atomic>

int main(int argc, char * argv[])
{
    long double f = 1.0;
    printf("f = %lf\n", f);
    printf("sizeof(long double) = %u\n", sizeof(f));
    std::atomic<int> counter;
    counter.fetch_add(1, std::memory_order_seq_cst);
    counter.fetch_add(1, std::memory_order_seq_cst);

    MemoryBarrier();
    ::system("pause");
    return 0;
}
