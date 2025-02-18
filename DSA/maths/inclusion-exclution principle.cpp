#include<iostream>
using namespace std;

int A_union_B(int N, int a, int b) 
{ 
    // Counts of numbers 
    // divisible by a and b 
    int count1 = N / a; 
    int count2 = N / b; 
  
    // inclusion-exclusion 
    // principle applied 
    int count3 = (N / (a * b)); 
  
    return count1 + count2 - count3; 
} 

int main(){
    int x=A_union_B(10,10,20);
    cout<<x;
}


// Inclusion-Exclusion Principle

// The Inclusion-Exclusion Principle is a fundamental combinatorial tool used to calculate the size of the union of overlapping sets by systematically including and excluding their intersections. It prevents double-counting elements that belong to multiple sets. Here's a detailed breakdown:

// 1. Basic Idea
// - When calculating the union of sets, simply adding their sizes counts elements in overlapping regions multiple times.
// - Inclusion-Exclusion adjusts for overlaps by adding individual set sizes, subtracting pairwise intersections, adding triple intersections, and so on.

// ---

// 2. Formula
// For 2 Sets:
// |A ∪ B| = |A| + |B| - |A ∩ B|

// For 3 Sets:
// |A ∪ B ∪ C| = |A| + |B| + |C| - |A ∩ B| - |A ∩ C| - |B ∩ C| + |A ∩ B ∩ C|

// Generalized for n Sets:
// |A₁ ∪ A₂ ∪ ... ∪ Aₙ| = Σ|Aᵢ| - Σ|Aᵢ ∩ Aⱼ| + Σ|Aᵢ ∩ Aⱼ ∩ Aₖ| - ... + (-1)^(n+1) |A₁ ∩ A₂ ∩ ... ∩ Aₙ|

// ---

// 3. Example
// Problem: How many integers between 1 and 100 are divisible by 2 or 3?
// Solution:
// - Let A = numbers divisible by 2 → |A| = ⌊100/2⌋ = 50.
// - Let B = numbers divisible by 3 → |B| = ⌊100/3⌋ = 33.
// - A ∩ B = numbers divisible by 6 → |A ∩ B| = ⌊100/6⌋ = 16.
// - By Inclusion-Exclusion:
//   |A ∪ B| = 50 + 33 - 16 = 67.
// Answer: 67 numbers.

// 4. Algorithm Design:
//    - Solve problems like "count integers ≤ N divisible by any of a given set of primes".

// ---

// 5. Pitfalls to Avoid
// - Exponential Complexity: For n sets, the formula requires 2ⁿ - 1 terms (all possible intersections). This becomes impractical for large n.
// - Alternating Signs: Missing a term or misapplying the alternating (+/-) pattern leads to errors.
// - Empty Intersections: Ensure intersections exist (e.g., A ∩ B ∩ C might be empty).

// ---

// 6. Why It Matters in DSA
// - Optimization: Avoids brute-force counting in overlapping scenarios.
// - Problem-Solving: Frequently used in competitive programming (e.g., combinatorics, number theory problems).
// - Example Coding Problem:
//   "Find how many numbers in [1, N] are divisible by any of the primes {2, 3, 5}."
//   Solution: Use Inclusion-Exclusion to compute |2ℤ ∪ 3ℤ ∪ 5ℤ|.
