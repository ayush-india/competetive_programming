#include <cstring> 
#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	char str[] = "geeksforgeeks\n"; 
	memset(str, 't', sizeof(str)); 
	cout << str; 
	return 0; 
}
