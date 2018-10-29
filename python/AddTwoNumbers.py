class AddTwoNumbers:
    def __init__(self):
        self.x1 = 0.0
        self.x2 = 0.0
        self.result = self.x1 + self.x2

    def  add_numbers(y1, y2):
        int(y1) + int(y2)

if __name__ == '__main__':
    i = AddTwoNumbers()
    print("This script adds two integers.")
    action = input("The first number:")
    x1 = action
    action2 = input("The second number:")
    x2 = action2

    print ("The result is: {}".format(i.add_number(x1, x2)))

