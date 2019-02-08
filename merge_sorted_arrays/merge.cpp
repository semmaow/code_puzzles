// from https://www.interviewcake.com/question/cpp/merge-sorted-arrays
// needs more edge case attention, but base concept is sound
#include <vector>
#include <iostream>

std::vector<int> mergeVectors(std::vector<int> A, std::vector<int> B) {

  std::cout << "meowcat\n";
  std::vector<int> merged;
  while (A.size() > 0 ||  B.size() > 0) {
    if (A[0] <= B[0] || B.size() == 0) {
      merged.push_back(A[0]);
      A.erase(A.begin());
    }
    else {
      merged.push_back(B[0]);
      B.erase(B.begin());
    }

  }
  return merged;


}

int main() {

  
  int arA[] = {1, 3, 5, 7};
  std::vector<int> A (arA, arA + sizeof(arA) / sizeof(int) );
  int arB[] = {2, 4, 6, 8, 10, 14, 20};
  std::vector<int> B (arB, arB + sizeof(arB) / sizeof(int) );
  std::vector<int> merged = mergeVectors(A, B);

  for (auto i : merged) {
    std::cout << i << " ";
  }
  std::cout << "\n";

  return 0;
}
