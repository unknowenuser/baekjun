word = input()
temp_word = word
i = 0
while True:
    palindrome = True
    for j in range(len(temp_word)//2):
        if temp_word[j] != temp_word[-j-1]:
            palindrome = False
            break
    if palindrome:
        print(len(temp_word))
        break
    temp_word = word
    for j in range(i + 1):
        temp_word += word[i- j]
    i += 1
