str = input()
abc = ""
for i in range(len(str)-1):
    if(str[i]!=str[i+1]):
        abc+=str[i]
abc+=str[len(str)-1]
print(abc)

