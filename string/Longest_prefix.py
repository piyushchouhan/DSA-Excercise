# Python 3 program to find longest
# common prefix of given array of words.

def LongestCommonPrefix(a):
    size = len(a)

    if(size == 0):
        return ""
    
    if(size == 1):
        return a[0]
    
    a.sort()

    min_length = min(len(a[0]),len(a[size-1]))

    counter = 0
    while(counter < min_length and a[0][counter] == a[size-1][counter]):
        counter += 1
    pre = a[0][0:counter]
    return pre

# Driver Code
# if __name__ == "__main__":  
input = ["ahdieiei", "ahdfgit","ahdgkld", "ahddlkhfa"]
print("The longest Common Prefix is :" ,LongestCommonPrefix(input))
