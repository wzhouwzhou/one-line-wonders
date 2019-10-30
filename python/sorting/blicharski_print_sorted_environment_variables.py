import os; [print(f'{var}={val}') for var, val in dict(sorted(os.environ.items())).items()]
