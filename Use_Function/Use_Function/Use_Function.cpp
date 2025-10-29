#include <stdio.h>
#include <Windows.h>
using namespace std;


int main() {

HANDLE hFile = INVALID_HANDLE_VALUE;


LPCWSTR filePath = L"C:\\Users\\ghostinwires\\Desktop\\maldev.txt";

// Call CreateFileW with the file path
// The additional parameters are directly from the documentation
hFile = CreateFileW(filePath, GENERIC_ALL, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

// On failure CreateFileW returns INVALID_HANDLE_VALUE
// GetLastError() is another Windows API that retrieves the error code of the previously executed WinAPI function
if (hFile == INVALID_HANDLE_VALUE) {
    printf("[-] CreateFileW Api Function Failed With Error : %d\n", GetLastError());
    return 0;
}