#include<iostream>
using namespace std;
void printarray(int a[], int size ,int index) {
    if (index>size) return;
    cout << a[index] << " ";
    printarray(a, size, index+1); 
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 8; 
    int index = 0;
    printarray(array, size,index);
    return 0;
}
