// Name: Varnika Maurya
// PRN: 24070123160
// Experiment: Algorithm Analysis using Big O Notation
#include <iostream>
#include <vector>
using namespace std;
int getFirstElement(const vector<int>& arr) {
    return arr[0]; 
}
void printElements(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
void printPairs(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "O(1) Example: First element = " << getFirstElement(numbers) << endl;
    cout << "\nO(n) Example: Printing elements:" << endl;
    printElements(numbers);
    cout << "\nO(n^2) Example: Printing pairs:" << endl;
    printPairs(numbers);
    return 0;
}

/*Output:
O(1) Example: First element = 1

O(n) Example: Printing elements:
1 2 3 4 5 

O(n^2) Example: Printing pairs:
(1,1) (1,2) (1,3) (1,4) (1,5) 
(2,1) (2,2) (2,3) (2,4) (2,5) 
(3,1) (3,2) (3,3) (3,4) (3,5) 
(4,1) (4,2) (4,3) (4,4) (4,5) 
(5,1) (5,2) (5,3) (5,4) (5,5)
  */
