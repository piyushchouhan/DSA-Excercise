#Length of the longest substring without repeating characters

def AreDsitinct(str, i, j):

    #note : default value in visited are false

    visited = [0] * (26)

    for k in range(i, j+1):
        if (visited[ord(str[k]) - ord('a')] == True):
            return False
        
        visited[ord(str[k])- ord('a')] = True
    return True

# Returns length of the longest substring  with all distinct characters.

def longestUniqueSubsttr(str):
    n = len(str)

    m = 0

    for i in range(n):
        for j in range(i, n):
            if (AreDsitinct(str, i, j)):
                m = max(m, j-i+1)
    
    return m

# Driver code
if __name__ == '__main__':

    str = "MERANAAMPIYUSHHAI"

    length = longestUniqueSubsttr(str)
    print("The length of the longest " "non-repeating character substring is ", length)