import os; num = int(input("How many directories: ")); [os.makedirs(f'directory{i}') for i in range(num)]
