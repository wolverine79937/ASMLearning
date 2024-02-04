#include <windows.h>

int main() {
    __debugbreak();  // Equivalent of int3 instruction
    ExitProcess(0);  // Exit with return code 0
}