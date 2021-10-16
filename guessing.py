import random
class GuessingGame:

    def __init__(self):
     
        self.low = 1
        self.high =50

  
    def get_random_number(self):
        return random.randint(self.low, self.high)


 
    def start(self):
      
        random_number = self.get_random_number()

        print(
            "Guess the randomly generated number from 1 to 50")

     
        chances = 0
        while True:
            
            user_number = int(input("Enter the guessed number: "))
            if user_number == random_number:
                print("-> YESSS! You got it ")
                break
            elif user_number < random_number:
                print("-> Your number is LESS than the random number")
            else:
                print("-> Your number is BIGGER than the random number")
            chances += 1
            if chances == 3  : 
               print("You lose!") 
               print("the number is : ",random_number)
               break
numberGuessingGame =GuessingGame()
numberGuessingGame.start()