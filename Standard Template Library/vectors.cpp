// Functions of Vectors
// vector <int> arr

// All the functions should be accessed by, arr.functionName()

// 1. size() – Returns the number of elements in the vector.
// 2. front() – Returns a reference to the first element in the vector
// 3. back() – Returns a reference to the last element in the vector
// 4. push_back() – It push the elements into a vector from the back
// 5. pop_back() – It is used to pop or remove elements from a vector from the back.
// 6.clear() – It is used to remove all the elements of the vector container
// 7.empty() - Checks if the vector is empty.


#include<vector>

using namespace std; 

int main()
{

//declaring the integer vector of size zero
vector <int> arr;

// 1. push the element in the vector
	arr.push_back(10); //arr have one element & its size = 1
	arr.push_back(20); // arr have two elements & size = 2
	
// 2. remove the last element
	arr.pop_back(); // removes the last element & reduces the size by 1
	//now array has - one elemenet 10 & size = 1
	
// 3. to get the size of arr
	arr.size();  // this returns the size of array
	
// 4. to check if array is empty
	arr.empty();	

}