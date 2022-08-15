def vowels(str,vowel):
    count = 0
    for i in range(len(str)):
        for j in range(len(vowel)):
            if(str[i]==vowel[j]):
                count += 1
    return count
string = input()
vowel = "aeiouAEIOU"
print(vowels(string,vowel))