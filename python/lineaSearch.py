arrayNumbers=[4,5,8,7,9,1,2,32,25,48,44]


def linearSearch(arr,n):
    for i in arr:
        if i==n:
            return "found"
    return "Not found"
    
print(linearSearch(arrayNumbers,32))