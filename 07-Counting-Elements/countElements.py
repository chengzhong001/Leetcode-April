
def countElements(arr:list):
    return sum([ 1 for i in arr if i+1 in arr])


if __name__ == "__main__":
    arr = [1, 2, 3]
    print(countElements(arr))
    arr = [1, 1, 3, 3, 5, 5, 7, 7]
    print(countElements(arr))
    arr = [1, 3, 2, 3, 5, 0]
    print(countElements(arr))