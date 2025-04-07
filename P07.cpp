#include <iostream>
#include <algorithm> // For std::swap (used in iterative version)
using namespace std;

// Recursive GCD with ternary operator for compactness
int gcd_recursive(int a, int b) {
    return b == 0 ? a : gcd_recursive(b, a % b);
}

// Iterative GCD with explicit variable naming
int gcd_iterative(int x, int y) {
    while (y != 0) {
        x %= y;
        swap(x, y); 
    }
    return x;
}

void compute_and_show(int a, int b, const string& method) {
    int result = (method == "recursive") ? gcd_recursive(a, b) : gcd_iterative(a, b);
    cout << "GCD of " << a << " and " << b << " (" << method << ") is: " << result << endl;
}

int main() {
    int num1, num2;
    
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    
    // Ensure positive numbers (GCD is defined for positives)
    num1 = abs(num1);
    num2 = abs(num2);
    
    // Compute and display results
    compute_and_show(num1, num2, "recursive");
    compute_and_show(num1, num2, "iterative");
    
    return 0;
}
