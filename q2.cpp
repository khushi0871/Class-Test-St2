/* Name:Khushi Agarwal
   Roll no.-2010990871
   set no.-4
   Q 2

*/
#include <iostream>
#include <unordered_set>
using namespace std;
 
// Function to check if consecutive integers form an array
bool isConsecutive(int arr[], int n)
{
    // base case
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
 
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 
   
    // the maximum and minimum element in it should be exactly `n-1`
    if (max - min != n - 1) {
        return false;
    }
 
    // create an empty set (we can also use a visited array)
    unordered_set<int> visited;
 
    // traverse the array and checks if each element appears only once
    for (int i = 0; i < n; i++)
    {
        // if an element is seen before, return false
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
 
        visited.insert(arr[i]);
    }
 
    return true;
}
 
int main()
{
    int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
	 }
    isConsecutive(arr, n)? cout << " array contains consecutive integers":
                        cout << " array does not contain consecutive integers";
 
    return 0;
}

