import os
class Calculator:
    def __init__(self):
        os.system("clear")
        print("-" * 40)
        print("             Calculator")
        print("-" * 40)
        #title
      
        print("[1] Sum\n[2] Subtration\n[3] Multiplication\n[4] Division\n")
        #options
        
    def option(self, number_option, x, y):
        if(number_option == 1):
            self.result = x + y
        elif(number_option == 2):
            self.result = x - y
        elif(number_option == 3):
            self.result = x * y
        elif(number_option == 4):
            self.result = x / y
        
            
    
mainLoop = True

while mainLoop:
    calculator = Calculator()
    
    opt = int(input("Option: "))
    number1 = int(input("\nNumber 1: "))
    number2 = int(input("\nNumber 2: "))
    
    calculator.option(opt, number1, number2)
    
    print(f"\nResult: {calculator.result}\n")
    
    chooseLoop = True
    
    while chooseLoop:
        exit = input("Do you want exit[Y/N]: ")
        
        if(exit.upper() == 'Y'):
            mainLoop = False
            chooseLoop = False
        elif(exit.upper() == 'N'): 
            chooseLoop = False
        else: 
            print("\nPlease, choose Y or N to answer if you want exit or no!\n")
        

print("END")
        
 
    
