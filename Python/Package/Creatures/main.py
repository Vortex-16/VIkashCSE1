import creatures


while(True):
    choice=int(input("Enter 1 for Birds\nEnter 2 for Fish\nEnter 3 for Reptiles\nEnter 4 for Amphibians\nEnter 5 for Mammals\nYour choice: "))
    if choice==1:
        creatures.birds.example()
        creatures.birds.chars()
    elif choice==2:
        creatures.fish.example()
        creatures.fish.chars()
        
    elif choice==3:
        creatures.reptiles.example()
        creatures.reptiles.chars()
        
    elif choice==4:
        creatures.amphibians.example()
        creatures.amphibians.chars()
        
    elif choice==5:
        creatures.mammals.example()
        creatures.mammals.chars()
        
    else:
        print("Invalid Choice! Please try again.")
        choice=int(input("Enter 1 for Birds\nEnter 2 for Fish\nEnter 3 for Reptiles\nEnter 4 for Amphibians\nEnter 5 for Mammals\nYour choice: "))