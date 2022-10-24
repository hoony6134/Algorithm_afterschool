import random
import math
ans=math.ceil(random.random()*100)
cnt=0
print("Guess a number between 1 and 100")
while True:
    guess=int(input("Enter a number: "))
    cnt+=1
    if guess==ans:
        print("You got it!","Count:",cnt)
        if cnt<=math.ceil(math.log2(100)):
            print("You are a genius!")
        break
    elif guess<ans:
        print("UP")
    else:
        print("DOWN")