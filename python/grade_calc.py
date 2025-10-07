
# Program to calculate grade based on percentage

def calc_grade(percentage):
    if 75 <= percentage <= 100:
        return "A Grade"
    elif 50 <= percentage <= 74:
        return "B Grade"
    elif 25 <= percentage <= 49:
        return "C Grade"
    elif 0 <= percentage <= 24:
        return "D Grade"
    else:
        return "Invalid percentage! Please enter between 0 and 100."


    
percentage = float(input("Enter your percentage: "))
grade = calc_grade(percentage)
print("Your Grade:", grade)
