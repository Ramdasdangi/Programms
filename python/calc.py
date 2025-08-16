print("all operations are combine : ")
yes = "yes"
b=int(input("enter first number :  "))
total=b
while(yes=="yes"):
    print("what do you want :: ")
    print('for addition enter 1  : ')
    print('for substration enter 2 : ')
    print('for multiplication enter 3 ')
    
    x=int(input())
    
    c=int(input('Enter another nuber : '))
    
    if x==1:
        total=total+c
        print('Total after adding : ', total)
        
    elif x==2:
        total=total-c
        print('Total after subtract : ', total)
        
    elif x==3:
        total=total*c
        print('Total after multipilication : ', total)
        
    else:
        print("chosen right operator ✓ . Thanks" )

    v=str(input("do you want more calculation then enter ( yes )  :  "))
    yes=v