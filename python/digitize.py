# Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
# Example (Input => Output):

# 35231 => [1,3,2,5,3]
# 0     => [0]

def digitize(n):
    strNb = str(n)
    reversStr = strNb[::-1]
    arr = []
    for i in reversStr:
        arr.append(int(i))
    return arr



print("35231 => ... revers", digitize(35231))
print("0 => ... revers", digitize(0))
print("23582357 => ... revers", digitize(23582357))