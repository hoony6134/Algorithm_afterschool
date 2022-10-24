list=[2,6,9,50,73,102,999]
def sequential_search(list, item):
    for i in range(len(list)):
        if list[i] == item:
            print("Found at position",i+1)
    return 'Not in list'
print(sequential_search(list, int(input("Enter a number: "))))