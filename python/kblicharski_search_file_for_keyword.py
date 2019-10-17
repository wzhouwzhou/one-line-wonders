word = input('Enter the word to match: '); [print(line) for line in open(input('Enter the file to search: ')) if word in line]
