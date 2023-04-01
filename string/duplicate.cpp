// print all the duplicate in the input srtring
#include <iostream>
using namespace std;

int Duplicate_Character(string str)
{
    int n = str.length();
    int k = 1;
    for (int i =0; i<n ; i++)
    {
        for(int j = i+1 ; j < n; j++)
        {
            if(str[i] == str [j])
            {
                k++;
            }
        }
    }
    return k;
    
}

int main(){
    string str1 = "test case";
    cout << Duplicate_Character(str1) << endl;

}