// PRACTIC1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int findSum(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}


int findMin(const int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}


int findMax(const int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}


double findAverage(const int arr[], int n) {
    int sum = findSum(arr, n); 
    return static_cast<double>(sum) / n;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Сума елементів масиву: " << findSum(arr, n) << endl;
    cout << "Мінімальний елемент масиву: " << findMin(arr, n) << endl;
    cout << "Максимальний елемент масиву: " << findMax(arr, n) << endl;
    cout << "Середнє значення елементів масиву: " << findAverage(arr, n) << endl;

    return 0;
}