def sumdigit(n):
    answer = 0
    for digit in str(n):
        answer+=int(digit)
    return answer
while(True):
    n = int(input(""))
    if(n==0):
        break
    for x in range(11,10**6):
        if(sumdigit(x*n)==sumdigit(n)):
            print(x)
            break

