//Convert a sentence into its equivalent mobile numeric keypad sequence
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string printSequence(string arr[], string input)
{
    string output = "";
    int n = input.length();
    for (int i = 0; i < n ;i++)
    if (input[i] == ' ')
        output = output + "0";
    else
        output =  output + arr[input[i]-'A'];
    return output;

}

// Driver Code
int main()
{
	// storing the sequence in array
	string str[] = { "2", "22", "222", "3", "33", "333", "4",
			"44", "444", "5", "55", "555", "6", "66",
			"666", "7", "77", "777", "7777", "8", "88",
			"888", "9", "99", "999", "9999" };

	string input = "GEEKSFORGEEKS";
	cout << printSequence(str, input)<< endl;
	return 0;
}
