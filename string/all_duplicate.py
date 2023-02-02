# Print all the duplicates in the input string

NO_OF_CHARS = 256

def fillCharCounts(string, count):
    for i in string:
        count[ord(i)] += 1
    return count


def printDups(string):
    count = [0] * NO_OF_CHARS
    count = fillCharCounts(string, count)

    n = 0

    for i in count:
        if int(i)  > 1:
            print(f"{chr(n)} count = {str(i)}")
        n += 1

string = "test string"
print(printDups(string))